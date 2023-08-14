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

#ifndef _HEAVY_LV2_THECLOUD_
#define _HEAVY_LV2_THECLOUD_

#include "DistrhoPlugin.hpp"
#include "DistrhoPluginInfo.h"
#include "Heavy_TheCloud.hpp"

START_NAMESPACE_DISTRHO

static void hvSendHookFunc(HeavyContextInterface *c, const char *sendName, uint32_t sendHash, const HvMessage *m);
static void hvPrintHookFunc(HeavyContextInterface *c, const char *printLabel, const char *msgString, const HvMessage *m);

class HeavyDPF_TheCloud : public Plugin
{
public:
  enum Parameters
  {
    paramdensity,
    paramdetune,
    paramflow,
    parammix,
    paramstraight_delay,
    paramtime,
    paramwidth,
    
  };

  HeavyDPF_TheCloud();
  ~HeavyDPF_TheCloud() override;

  void handleMidiInput(uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount);
  void handleMidiSend(uint32_t sendHash, const HvMessage *m);

protected:
  // -------------------------------------------------------------------
  // Information

  const char* getLabel() const noexcept override
  {
    return "TheCloud";
  }
  const char* getDescription() const override
  {
    return "Rename Me";
  }

  const char* getMaker() const noexcept override
  {
    return "Wasted Audio";

  }

  const char* getLicense() const noexcept override
  {
    return "ISC";

  }

  uint32_t getVersion() const noexcept override
  {
    return d_version(0, 0, 1);
  }

  int64_t getUniqueId() const noexcept override
  {
    return int64_t( 0x4DD2841C );
  }

  // -------------------------------------------------------------------
  // Init

  void initParameter(uint32_t index, Parameter& parameter) override;

  // -------------------------------------------------------------------
  // Internal data

  float getParameterValue(uint32_t index) const override;
  void  setParameterValue(uint32_t index, float value) override;

  // -------------------------------------------------------------------
  // Process

  // void activate() override;
  // void deactivate() override;

#if DISTRHO_PLUGIN_WANT_MIDI_INPUT
  void run(const float** inputs, float** outputs, uint32_t frames, const MidiEvent* midiEvents, uint32_t midiEventCount) override;
#else
  void run(const float** inputs, float** outputs, uint32_t frames) override;
#endif

  // -------------------------------------------------------------------
  // Callbacks

  void sampleRateChanged(double newSampleRate) override;

  // -------------------------------------------------------------------

private:
  // parameters
  float _parameters[7]; // in range of [0,1]

  // transport values
  bool wasPlaying;
  float samplesProcessed;
  double nextClockTick;
  double sampleAtCycleStart;

  // heavy context
  HeavyContextInterface *_context;

  // HeavyDPF_TheCloud<float> fTheCloud;

  DISTRHO_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(HeavyDPF_TheCloud)
};

// -----------------------------------------------------------------------

END_NAMESPACE_DISTRHO

#endif // _HEAVY_LV2_THECLOUD_
