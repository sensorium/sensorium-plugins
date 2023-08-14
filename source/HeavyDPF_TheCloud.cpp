/**
 * Copyright (c) 2023 Enzien Audio, Ltd.
 * 
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 * 
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions, and the following disclaimer.
 * 
 * 2. Redistributions in binary form must reproduce the phrase "powered by heavy",
 *    the heavy logo, and a hyperlink to https://enzienaudio.com, all in a visible
 *    form.
 * 
 *   2.1 If the Application is distributed in a store system (for example,
 *       the Apple "App Store" or "Google Play"), the phrase "powered by heavy"
 *       shall be included in the app description or the copyright text as well as
 *       the in the app itself. The heavy logo will shall be visible in the app
 *       itself as well.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
 * THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 */

#include "Heavy_TheCloud.h"
#include "HeavyDPF_TheCloud.hpp"
#include <set>


#define HV_LV2_NUM_PARAMETERS 7

#define HV_HASH_NOTEIN          0x67E37CA3
#define HV_HASH_CTLIN           0x41BE0f9C
#define HV_HASH_POLYTOUCHIN     0xBC530F59
#define HV_HASH_PGMIN           0x2E1EA03D
#define HV_HASH_TOUCHIN         0x553925BD
#define HV_HASH_BENDIN          0x3083F0F7
#define HV_HASH_MIDIIN          0x149631bE
#define HV_HASH_MIDIREALTIMEIN  0x6FFF0BCF

#define HV_HASH_NOTEOUT         0xD1D4AC2
#define HV_HASH_CTLOUT          0xE5e2A040
#define HV_HASH_POLYTOUCHOUT    0xD5ACA9D1
#define HV_HASH_PGMOUT          0x8753E39E
#define HV_HASH_TOUCHOUT        0x476D4387
#define HV_HASH_BENDOUT         0xE8458013
#define HV_HASH_MIDIOUT         0x6511DE55
#define HV_HASH_MIDIOUTPORT     0x165707E4

#define MIDI_RT_CLOCK           0xF8
#define MIDI_RT_START           0xFA
#define MIDI_RT_CONTINUE        0xFB
#define MIDI_RT_STOP            0xFC
#define MIDI_RT_ACTIVESENSE     0xFE
#define MIDI_RT_RESET           0xFF

// midi realtime messages
std::set<int> mrtSet {
  MIDI_RT_CLOCK,
  MIDI_RT_START,
  MIDI_RT_CONTINUE,
  MIDI_RT_STOP,
  MIDI_RT_RESET
};


START_NAMESPACE_DISTRHO


// -------------------------------------------------------------------
// Heavy Send and Print hooks

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m)
{
  HeavyDPF_TheCloud* plugin = (HeavyDPF_TheCloud*)c->getUserData();
  if (plugin != nullptr)
  {
#if DISTRHO_PLUGIN_WANT_MIDI_OUTPUT
    plugin->handleMidiSend(sendHash, m);
#endif
  }
}

static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m)
{
  char buf[64];
  char* dst = buf;
  int len = strnlen(printLabel, 48);
  dst = strncpy(dst, printLabel, len);
  dst = strcpy(dst, " ");
  dst = strncpy(dst, msgString, 63-len);
  printf("> %s \n", buf);
}

// -------------------------------------------------------------------
// Main DPF plugin class

HeavyDPF_TheCloud::HeavyDPF_TheCloud()
 : Plugin(HV_LV2_NUM_PARAMETERS, 0, 0)
{
  _parameters[0] = 20.0f;
  _parameters[1] = 50.0f;
  _parameters[2] = 500.0f;
  _parameters[3] = 0.75f;
  _parameters[4] = 0.0f;
  _parameters[5] = 1000.0f;
  _parameters[6] = 0.5f;
  

  _context = hv_TheCloud_new_with_options(getSampleRate(), 10, 7, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  
  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_LV2_NUM_PARAMETERS; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}

HeavyDPF_TheCloud::~HeavyDPF_TheCloud() {
  hv_TheCloud_free(_context);
}

void HeavyDPF_TheCloud::initParameter(uint32_t index, Parameter& parameter)
{// initialise parameters with defaults
  switch (index)
  {
    case paramdensity:
        parameter.name = "density";
        parameter.symbol = "density";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 1.0f;
        parameter.ranges.max = 80.0f;
        parameter.ranges.def = 20.0f;
        break;
    case paramdetune:
        parameter.name = "detune";
        parameter.symbol = "detune";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 2.0f;
        parameter.ranges.max = 200.0f;
        parameter.ranges.def = 50.0f;
        break;
    case paramflow:
        parameter.name = "flow";
        parameter.symbol = "flow";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 50.0f;
        parameter.ranges.max = 900.0f;
        parameter.ranges.def = 500.0f;
        break;
    case parammix:
        parameter.name = "mix";
        parameter.symbol = "mix";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.75f;
        break;
    case paramstraight_delay:
        parameter.name = "straight delay";
        parameter.symbol = "straight_delay";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 2000.0f;
        parameter.ranges.def = 0.0f;
        break;
    case paramtime:
        parameter.name = "time";
        parameter.symbol = "time";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 2000.0f;
        parameter.ranges.def = 1000.0f;
        break;
    case paramwidth:
        parameter.name = "width";
        parameter.symbol = "width";
        parameter.hints = kParameterIsAutomatable;
        parameter.ranges.min = 0.0f;
        parameter.ranges.max = 1.0f;
        parameter.ranges.def = 0.5f;
        break;
    
  }
  
}

// -------------------------------------------------------------------
// Internal data

float HeavyDPF_TheCloud::getParameterValue(uint32_t index) const
{
  return _parameters[index];
  
}

void HeavyDPF_TheCloud::setParameterValue(uint32_t index, float value)
{
  switch (index) {
    case 0: {
      _context->sendFloatToReceiver(
          Heavy_TheCloud::Parameter::In::DENSITY,
          value);
      break;
    }
    case 1: {
      _context->sendFloatToReceiver(
          Heavy_TheCloud::Parameter::In::DETUNE,
          value);
      break;
    }
    case 2: {
      _context->sendFloatToReceiver(
          Heavy_TheCloud::Parameter::In::FLOW,
          value);
      break;
    }
    case 3: {
      _context->sendFloatToReceiver(
          Heavy_TheCloud::Parameter::In::MIX,
          value);
      break;
    }
    case 4: {
      _context->sendFloatToReceiver(
          Heavy_TheCloud::Parameter::In::STRAIGHT_DELAY,
          value);
      break;
    }
    case 5: {
      _context->sendFloatToReceiver(
          Heavy_TheCloud::Parameter::In::TIME,
          value);
      break;
    }
    case 6: {
      _context->sendFloatToReceiver(
          Heavy_TheCloud::Parameter::In::WIDTH,
          value);
      break;
    }
    
    default: return;
  }
  _parameters[index] = value;
  
}


// -------------------------------------------------------------------
// Process

// void HeavyDPF_TheCloud::activate()
// {

// }

// void HeavyDPF_TheCloud::deactivate()
// {

// }

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
// -------------------------------------------------------------------
// Midi Input handler

void HeavyDPF_TheCloud::handleMidiInput(uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount)
{
  // Realtime events
  const TimePosition& timePos(getTimePosition());
  bool reset = false;

  if (timePos.playing)
  {
    if (timePos.frame == 0)
    {
      _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
        "ff", (float) MIDI_RT_RESET);
      reset = true;
    }

    if (! this->wasPlaying)
    {
      if (timePos.frame == 0)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_START);
      }
      if (! reset)
      {
        _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
          "ff", (float) MIDI_RT_CONTINUE);
      }
    }
  }
  else if (this->wasPlaying)
  {
    _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 0,
      "ff", (float) MIDI_RT_STOP);
  }
  this->wasPlaying = timePos.playing;

  // sending clock ticks
  if (timePos.playing && timePos.bbt.valid)
  {
    float samplesPerBeat = 60 * getSampleRate() / timePos.bbt.beatsPerMinute;
    float samplesPerTick = samplesPerBeat / 24.0;

    /* get state */
    double nextClockTick = this->nextClockTick;
    double sampleAtCycleStart = this->sampleAtCycleStart;
    double sampleAtCycleEnd = sampleAtCycleStart + frames;

    while (nextClockTick < sampleAtCycleEnd) {
      _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 1000*(nextClockTick - sampleAtCycleStart)/getSampleRate(),
        "ff", (float) MIDI_RT_CLOCK);
      nextClockTick += samplesPerTick;
    }

    /* save variables for next cycle */
    this->sampleAtCycleStart = sampleAtCycleEnd;
    this->nextClockTick = nextClockTick;
  }

  // Midi events
  for (uint32_t i=0; i < midiEventCount; ++i)
  {
    int status = midiEvents[i].data[0];
    int command = status & 0xF0;
    int channel = status & 0x0F;
    int data1   = midiEvents[i].data[1];
    int data2   = midiEvents[i].data[2];

    // raw [midiin] messages
    int dataSize = *(&midiEvents[i].data + 1) - midiEvents[i].data;

    for (int i = 0; i < dataSize; ++i) {
      _context->sendMessageToReceiverV(HV_HASH_MIDIIN, 1000.0*midiEvents->frame/getSampleRate(), "ff",
        (float) midiEvents[i].data[i],
        (float) channel);
    }

    if(mrtSet.find(status) != mrtSet.end())
    {
      _context->sendMessageToReceiverV(HV_HASH_MIDIREALTIMEIN, 1000.0*midiEvents->frame/getSampleRate(),
        "ff", (float) status);
    }

    // typical midi messages
    switch (command) {
      case 0x80: {  // note off
        _context->sendMessageToReceiverV(HV_HASH_NOTEIN, 1000.0*midiEvents->frame/getSampleRate(), "fff",
          (float) data1, // pitch
          (float) 0, // velocity
          (float) channel);
        break;
      }
      case 0x90: { // note on
        _context->sendMessageToReceiverV(HV_HASH_NOTEIN, 1000.0*midiEvents->frame/getSampleRate(), "fff",
          (float) data1, // pitch
          (float) data2, // velocity
          (float) channel);
        break;
      }
      case 0xA0: { // polyphonic aftertouch
        _context->sendMessageToReceiverV(HV_HASH_POLYTOUCHIN, 1000.0*midiEvents->frame/getSampleRate(), "fff",
          (float) data2, // pressure
          (float) data1, // note
          (float) channel);
        break;
      }
      case 0xB0: { // control change
        _context->sendMessageToReceiverV(HV_HASH_CTLIN, 1000.0*midiEvents->frame/getSampleRate(), "fff",
          (float) data2, // value
          (float) data1, // cc number
          (float) channel);
        break;
      }
      case 0xC0: { // program change
        _context->sendMessageToReceiverV(HV_HASH_PGMIN, 1000.0*midiEvents->frame/getSampleRate(), "ff",
          (float) data1,
          (float) channel);
        break;
      }
      case 0xD0: { // aftertouch
        _context->sendMessageToReceiverV(HV_HASH_TOUCHIN, 1000.0*midiEvents->frame/getSampleRate(), "ff",
          (float) data1,
          (float) channel);
        break;
      }
      case 0xE0: { // pitch bend
        // combine 7bit lsb and msb into 32bit int
        hv_uint32_t value = (((hv_uint32_t) data2) << 7) | ((hv_uint32_t) data1);
        _context->sendMessageToReceiverV(HV_HASH_BENDIN, 1000.0*midiEvents->frame/getSampleRate(), "ff",
          (float) value,
          (float) channel);
        break;
      }
      default: break;
    }
  }
}
#endif

#if DISTRHO_PLUGIN_WANT_MIDI_OUTPUT
// -------------------------------------------------------------------
// Midi Send handler

void HeavyDPF_TheCloud::handleMidiSend(uint32_t sendHash, const HvMessage *m)
{
  MidiEvent midiSendEvent;
  midiSendEvent.frame = 0;
  midiSendEvent.dataExt = nullptr;

  switch(sendHash){
    case HV_HASH_NOTEOUT: // __hv_noteout
    {
      uint8_t note = hv_msg_getFloat(m, 0);
      uint8_t velocity = hv_msg_getFloat(m, 1);
      uint8_t ch = hv_msg_getFloat(m, 2);
      ch %= 16;  // drop any pd "ports"

      midiSendEvent.size = 3;
      if (velocity > 0){
        midiSendEvent.data[0] = 0x90 | ch; // noteon
      } else {
        midiSendEvent.data[0] = 0x80 | ch; // noteoff
      }
      midiSendEvent.data[1] = note;
      midiSendEvent.data[2] = velocity;

      writeMidiEvent(midiSendEvent);
      break;
    }
    case HV_HASH_CTLOUT:
    {
      uint8_t value = hv_msg_getFloat(m, 0);
      uint8_t cc = hv_msg_getFloat(m, 1);
      uint8_t ch = hv_msg_getFloat(m, 2);
      ch %= 16;

      midiSendEvent.size = 3;
      midiSendEvent.data[0] = 0xB0 | ch; // send CC
      midiSendEvent.data[1] = cc;
      midiSendEvent.data[2] = value;

      writeMidiEvent(midiSendEvent);
      break;
    }
    case HV_HASH_POLYTOUCHOUT:
    {
      uint8_t value = hv_msg_getFloat(m, 0);
      uint8_t note = hv_msg_getFloat(m, 1);
      uint8_t ch = hv_msg_getFloat(m, 2);

      midiSendEvent.size = 3;
      midiSendEvent.data[0] = 0xA0 | ch; // send Poly Aftertouch
      midiSendEvent.data[1] = note;
      midiSendEvent.data[2] = value;

      writeMidiEvent(midiSendEvent);
      break;
    }
    case HV_HASH_PGMOUT:
    {
      uint8_t pgm = hv_msg_getFloat(m, 0);
      uint8_t ch = hv_msg_getFloat(m, 1);
      ch %= 16;

      midiSendEvent.size = 2;
      midiSendEvent.data[0] = 0xC0 | ch; // send Program Change
      midiSendEvent.data[1] = pgm;

      writeMidiEvent(midiSendEvent);
      break;
    }
    case HV_HASH_TOUCHOUT:
    {
      uint8_t value = hv_msg_getFloat(m, 0);
      uint8_t ch = hv_msg_getFloat(m, 1);
      ch %= 16;

      midiSendEvent.size = 2;
      midiSendEvent.data[0] = 0xD0 | ch; // send Touch
      midiSendEvent.data[1] = value;

      writeMidiEvent(midiSendEvent);
      break;
    }
    case HV_HASH_BENDOUT:
    {
      uint16_t value = hv_msg_getFloat(m, 0);
      uint8_t lsb  = value & 0x7F;
      uint8_t msb  = (value >> 7) & 0x7F;
      uint8_t ch = hv_msg_getFloat(m, 1);
      ch %= 16;

      midiSendEvent.size = 3;
      midiSendEvent.data[0] = 0xE0 | ch; // send Bend
      midiSendEvent.data[1] = lsb;
      midiSendEvent.data[2] = msb;

      writeMidiEvent(midiSendEvent);
      break;
    }
    case HV_HASH_MIDIOUT: // __hv_midiout
    {
      const uint8_t numElements = m->numElements;
      if (numElements <=4 )
      {
        for (int i = 0; i < numElements; ++i)
        {
          midiSendEvent.data[i] = hv_msg_getFloat(m, i);
        }
      }
      else
      {
        printf("> we do not support sysex yet \n");
        break;
      }

      // unsigned char* rawData = new unsigned char;
      // for (int i = 0; i < numElements; ++i) {
      //   rawData[i] = (uint8_t) hv_msg_getFloat(m, i);
      //   printf("> data: %d \n", rawData[i]);
      // }

      midiSendEvent.size = numElements;
      // midiSendEvent.dataExt = (const uint8_t *) rawData;

      writeMidiEvent(midiSendEvent);
      break;
    }
    default:
      break;
  }
}
#endif

// -------------------------------------------------------------------
// DPF Plugin run() loop

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
void HeavyDPF_TheCloud::run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount)
{
  handleMidiInput(frames, midiEvents, midiEventCount);
#else
void HeavyDPF_TheCloud::run(const float** inputs, float** outputs, uint32_t frames)
{
#endif
  _context->process((float**)inputs, outputs, frames);
}

// -------------------------------------------------------------------
// Callbacks

void HeavyDPF_TheCloud::sampleRateChanged(double newSampleRate)
{
  hv_TheCloud_free(_context);

  _context = hv_TheCloud_new_with_options(getSampleRate(), 10, 7, 2);
  _context->setUserData(this);
  _context->setSendHook(&hvSendHookFunc);
  _context->setPrintHook(&hvPrintHookFunc);

  // ensure that the new context has the current parameters
  for (int i = 0; i < HV_LV2_NUM_PARAMETERS; ++i) {
    setParameterValue(i, _parameters[i]);
  }
}


// -----------------------------------------------------------------------
/* Plugin entry point, called by DPF to create a new plugin instance. */

Plugin* createPlugin()
{
    return new HeavyDPF_TheCloud();
}

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO