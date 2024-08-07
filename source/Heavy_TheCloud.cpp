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

#include "Heavy_TheCloud.hpp"

#include <new>

#define Context(_c) static_cast<Heavy_TheCloud *>(_c)


/*
 * C Functions
 */

extern "C" {
  HV_EXPORT HeavyContextInterface *hv_TheCloud_new(double sampleRate) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_TheCloud));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_TheCloud(sampleRate);
    return Context(ptr);
  }

  HV_EXPORT HeavyContextInterface *hv_TheCloud_new_with_options(double sampleRate,
      int poolKb, int inQueueKb, int outQueueKb) {
    // allocate aligned memory
    void *ptr = hv_malloc(sizeof(Heavy_TheCloud));
    // ensure non-null
    if (!ptr) return nullptr;
    // call constructor
    new(ptr) Heavy_TheCloud(sampleRate, poolKb, inQueueKb, outQueueKb);
    return Context(ptr);
  }

  HV_EXPORT void hv_TheCloud_free(HeavyContextInterface *instance) {
    // call destructor
    Context(instance)->~Heavy_TheCloud();
    // free memory
    hv_free(instance);
  }
} // extern "C"







/*
 * Class Functions
 */

Heavy_TheCloud::Heavy_TheCloud(double sampleRate, int poolKb, int inQueueKb, int outQueueKb)
    : HeavyContext(sampleRate, poolKb, inQueueKb, outQueueKb) {
  numBytes += sLine_init(&sLine_U2iaix7D);
  numBytes += sTabwrite_init(&sTabwrite_hyR10Y1r, &hTable_sC4of0vj);
  numBytes += sTabhead_init(&sTabhead_ANHcqfNz, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_40nzdmYb, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_zUHGqNhc, &hTable_sC4of0vj, false);
  numBytes += sRPole_init(&sRPole_Qt4hoYCb);
  numBytes += sDel1_init(&sDel1_g7qofTD6);
  numBytes += sLine_init(&sLine_qJOMd2sW);
  numBytes += sLine_init(&sLine_K74XnqS9);
  numBytes += sTabhead_init(&sTabhead_g2PiP7aF, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_DRcuLHJT, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_S4Biz3Il, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_xPwqRDRY);
  numBytes += sLine_init(&sLine_8NTrJPnd);
  numBytes += sTabhead_init(&sTabhead_jtK8uOsB, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_fSORjJBV, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_sWJdYRyu, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_ic6RK1xu);
  numBytes += sLine_init(&sLine_Ewvj7EN3);
  numBytes += sTabhead_init(&sTabhead_lEoa9cuA, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_SMNCSBdz, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_Zw9URY1w, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_sYPbVxki);
  numBytes += sLine_init(&sLine_w4sn3Tj5);
  numBytes += sTabhead_init(&sTabhead_0PyaXQIX, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_AxADIrDQ, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_hCT02Zcu, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_iJRFhtfY);
  numBytes += sLine_init(&sLine_QIUSkDQd);
  numBytes += sTabhead_init(&sTabhead_l0LsDoS2, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_4aPq3141, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_jZMyI5ig, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_mE9SYTCk);
  numBytes += sLine_init(&sLine_eSYj7B2s);
  numBytes += sTabhead_init(&sTabhead_kiuIs1QJ, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_TjGzwvP4, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_hjiM0UJJ, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_Msc4LKex);
  numBytes += sLine_init(&sLine_NdbNwyQH);
  numBytes += sTabhead_init(&sTabhead_MFxVTctd, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_8YMC83lX, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_OsnXF6UL, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_mJeytBZi);
  numBytes += sLine_init(&sLine_Byakhyio);
  numBytes += sTabhead_init(&sTabhead_0U1YIrpq, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_MMkThwDL, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_oovx4V9C, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_rOdG8ARk);
  numBytes += sLine_init(&sLine_Vd89jAeG);
  numBytes += sTabhead_init(&sTabhead_46cJW02x, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_01fuk30O, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_3KnIZI4w, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_ozqSavGP);
  numBytes += sLine_init(&sLine_r9ATdssl);
  numBytes += sTabhead_init(&sTabhead_gVEW6g29, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_Ew9SIxfr, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_1ixJuu1w, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_xJnplTCJ);
  numBytes += sLine_init(&sLine_NCMr4Wgc);
  numBytes += sTabhead_init(&sTabhead_lKOD0Vek, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_6Hh6vOr7, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_6DmWwLqD, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_ImvOqxqQ);
  numBytes += sLine_init(&sLine_LoYXT3xz);
  numBytes += sTabhead_init(&sTabhead_Uf0cCByY, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_XeqZ0pz7, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_4Gost8N4, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_WYvesEtM);
  numBytes += sLine_init(&sLine_GYEWKr57);
  numBytes += sTabhead_init(&sTabhead_pr1hmmEF, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_1qrGaQ7I, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_b3iuql4Z, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_nVKIv82n);
  numBytes += sLine_init(&sLine_xJ1XdzEh);
  numBytes += sTabhead_init(&sTabhead_qGY9oDjK, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_8RQ0hzAQ, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_xt57abxM, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_3Ws9zF0v);
  numBytes += sLine_init(&sLine_fXsQ9Klq);
  numBytes += sTabhead_init(&sTabhead_ujEOXJMI, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_CnLQ05Mf, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_4oX4EulM, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_Ar1JfTj5);
  numBytes += sLine_init(&sLine_K1BDjFNr);
  numBytes += sTabhead_init(&sTabhead_sA2lgwzm, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_KGChq91Z, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_NKHG7QIY, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_eKHbf2yJ);
  numBytes += sLine_init(&sLine_c3Emob10);
  numBytes += sTabhead_init(&sTabhead_5R1YKscx, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_86PXo2Nm, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_U4Rmq8EJ, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_b3qKkgrm);
  numBytes += sLine_init(&sLine_Xlb9seAn);
  numBytes += sTabhead_init(&sTabhead_v8p1geId, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_obFWxAV9, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_CtGCYwFC, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_XGWlWz6x);
  numBytes += sLine_init(&sLine_1vnXhyvH);
  numBytes += sTabhead_init(&sTabhead_txgtIPWD, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_lGROm9qC, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_WgU6ZlBj, &hTable_sC4of0vj, false);
  numBytes += sLine_init(&sLine_cIn2bOMU);
  numBytes += sLine_init(&sLine_2fN2aP8r);
  numBytes += sTabhead_init(&sTabhead_Tli0rQ96, &hTable_sC4of0vj);
  numBytes += sTabread_init(&sTabread_vR0esAYL, &hTable_sC4of0vj, false);
  numBytes += sTabread_init(&sTabread_0oV5sG0c, &hTable_sC4of0vj, false);
  numBytes += cVar_init_f(&cVar_JX010fxe, 1.0f);
  numBytes += cVar_init_f(&cVar_ExRYOPVu, 0.0f);
  numBytes += sVarf_init(&sVarf_iRoYF6jx, 0.76f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gsj2KXaP, 0.76f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_FJBo5813, 5.0f);
  numBytes += sVarf_init(&sVarf_BApgl2lA, 0.0f, 0.0f, false);
  numBytes += cBinop_init(&cBinop_ySD49ABU, 0.0f); // __div
  numBytes += sVarf_init(&sVarf_dCM6fXO7, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_8ZMIL9tl, 0.0f);
  numBytes += cVar_init_f(&cVar_uGEVCo7k, 2000.0f);
  numBytes += cBinop_init(&cBinop_Hn5dma2D, 2000.0f); // __mul
  numBytes += cRandom_init(&cRandom_sF2QwNNP, -1711481293);
  numBytes += cSlice_init(&cSlice_8cO0KOWL, 1, 1);
  numBytes += cVar_init_f(&cVar_sKFsboeT, 0.0f);
  numBytes += cVar_init_f(&cVar_stXCFcc5, 0.0f);
  numBytes += cVar_init_f(&cVar_sca5zyjb, 0.0f);
  numBytes += cBinop_init(&cBinop_yMa1je4h, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_0P6J2Enj, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_u8uZKk1w, 0.0f); // __sub
  numBytes += cBinop_init(&cBinop_agUs1mOh, 400.0f); // __mul
  numBytes += cRandom_init(&cRandom_j00txyrp, 955423872);
  numBytes += cSlice_init(&cSlice_O9R5z1Qi, 1, 1);
  numBytes += cBinop_init(&cBinop_WrLZnSjc, 400.0f); // __mul
  numBytes += cRandom_init(&cRandom_yskwo2o5, -2110431506);
  numBytes += cSlice_init(&cSlice_nlKqYGjC, 1, 1);
  numBytes += cBinop_init(&cBinop_52ay1lzL, 0.0f); // __add
  numBytes += cVar_init_f(&cVar_yaVSM3gs, 1.0f);
  numBytes += cRandom_init(&cRandom_7lTGZrws, 75191448);
  numBytes += cSlice_init(&cSlice_oqpTV3mF, 1, 1);
  numBytes += cBinop_init(&cBinop_c5YoSADM, 0.0f); // __mul
  numBytes += cBinop_init(&cBinop_WUMWlnxk, 0.0f); // __add
  numBytes += cBinop_init(&cBinop_ef5GbckR, 0.0f); // __sub
  numBytes += cVar_init_f(&cVar_1mFQDe7i, 0.0f);
  numBytes += cRandom_init(&cRandom_6MEfA9F8, -213068796);
  numBytes += cSlice_init(&cSlice_DH76ZZ35, 1, 1);
  numBytes += cVar_init_f(&cVar_wdIXbJBy, 0.0f);
  numBytes += cVar_init_f(&cVar_Pg8Dt0mU, 0.0f);
  numBytes += cDelay_init(this, &cDelay_xg1W42HZ, 1.0f);
  numBytes += cIf_init(&cIf_ociaPB9K, false);
  numBytes += cVar_init_f(&cVar_q8kOJYDe, 0.0f);
  numBytes += cDelay_init(this, &cDelay_Lk2JbNiY, 0.0f);
  numBytes += cVar_init_f(&cVar_ISgShoAv, 10.0f);
  numBytes += cBinop_init(&cBinop_094oEmrv, 0.0f); // __mul
  numBytes += cVar_init_f(&cVar_uZHhfHHh, 0.0f);
  numBytes += cBinop_init(&cBinop_mRfbemHx, 10.0f); // __lt
  numBytes += cVar_init_f(&cVar_TjVdxK0H, 0.0f);
  numBytes += cVar_init_f(&cVar_n6wTtihw, 1.0f);
  numBytes += cIf_init(&cIf_GDJO8AlL, true);
  numBytes += cVar_init_f(&cVar_Eqm5Qucl, 1.0f);
  numBytes += sVarf_init(&sVarf_wFzy6YW9, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VVYgMAAo, 0.785f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_B4ik1iK6, 0.0f);
  numBytes += cVar_init_s(&cVar_vbAbvgVX, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_yZoSRGUA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_bPiI0QwA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VZzMLqXh, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_5o6PKJeC, 5.0f);
  numBytes += sVarf_init(&sVarf_emSr2ZfV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_P5W6jL09, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6YDGWA4N, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_yOGonNnm, 0.0f);
  numBytes += cVar_init_f(&cVar_i3chmGtY, 16.0f);
  numBytes += cDelay_init(this, &cDelay_4VHBosrJ, 0.0f);
  numBytes += cVar_init_f(&cVar_BYkkX9ju, 1.0f);
  numBytes += cVar_init_f(&cVar_Askzr8pc, 1.0f);
  numBytes += cVar_init_s(&cVar_3INM2mrt, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_Jf94M1OO, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Ji8whKbf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kpkYqVuA, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6uBDEnGR, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_gOAcoRmV, 0.785f, 0.0f, false);
  numBytes += cIf_init(&cIf_6MCx31H4, true);
  numBytes += sVarf_init(&sVarf_9zh9dOPw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5JOjI5HP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dgyFyp5x, 1.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_gZgYRqyu, 0.0f);
  numBytes += sVarf_init(&sVarf_bOzye91X, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jPCqn6k6, 0.785f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_VUcCzHkk, 3.0f);
  numBytes += cIf_init(&cIf_nue8rMaJ, true);
  numBytes += cVar_init_f(&cVar_3BGU8hpQ, 1.0f);
  numBytes += cVar_init_f(&cVar_816S8rYa, 1.0f);
  numBytes += cVar_init_s(&cVar_yXniSoQ9, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_nvwo0U61, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_LKXYBn6q, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3Xjk4ksj, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_47ysxGPD, 0.0f);
  numBytes += sVarf_init(&sVarf_TLlZbZU8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rsfZWEDS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ybwTetzy, 1.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_7mTceorB, 0.0f);
  numBytes += cVar_init_f(&cVar_jZh192na, 19.0f);
  numBytes += cVar_init_f(&cVar_P2lHC7WB, 0.0f);
  numBytes += cVar_init_f(&cVar_LH8FGV9b, 1.0f);
  numBytes += cIf_init(&cIf_yIoo5RFj, true);
  numBytes += cVar_init_f(&cVar_zxZf6fsN, 1.0f);
  numBytes += sVarf_init(&sVarf_xy0UTPMm, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GiEL5BFn, 0.785f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_lhmvVvAF, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_9zHwqlaG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rBGu3SVx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pMOsiyrV, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_dNUqFTkZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_CuhoGqcN, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_sxjJuHyY, 1.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_Fgw6pE1B, 0.0f);
  numBytes += cVar_init_f(&cVar_D9q4DOds, 0.0f);
  numBytes += cVar_init_s(&cVar_SdoMPjsj, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_xpIaDm4E, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_XaWACn7L, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_u0n6KKFj, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_VWFVDD3S, 1.0f);
  numBytes += cVar_init_f(&cVar_MZkWia28, 10.0f);
  numBytes += cIf_init(&cIf_SSHlOcVO, true);
  numBytes += cVar_init_f(&cVar_LoYWBFNH, 1.0f);
  numBytes += sVarf_init(&sVarf_muLA3W5x, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JxBiTzgy, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_umeqZgpL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vrPRbMLr, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_5OXNJTTB, 1.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_6pOlrK3A, true);
  numBytes += cVar_init_s(&cVar_b2sKIeIR, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_w2O24xbf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kecHkxil, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fzaGOLVn, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_koMgg00o, 1.0f);
  numBytes += cVar_init_f(&cVar_868nJvL9, 1.0f);
  numBytes += sVarf_init(&sVarf_AS8ifjsZ, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_F2D8Nlcw, 0.785f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_FuW1gfQN, 0.0f);
  numBytes += cVar_init_f(&cVar_0jFGMpjg, 17.0f);
  numBytes += cVar_init_f(&cVar_z9rDCwKw, 0.0f);
  numBytes += sVarf_init(&sVarf_cSXCnInZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_pGwRmq7y, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Hlthdacx, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_L7nqwuYv, 1.0f);
  numBytes += cVar_init_f(&cVar_3ZP8TxoL, 0.0f);
  numBytes += cVar_init_f(&cVar_5sbJKa4g, 12.0f);
  numBytes += cVar_init_s(&cVar_XX86nKmQ, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_XNmAWP2X, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jYxQMstI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_J6EuETfK, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_8UvK80ji, 0.0f);
  numBytes += sVarf_init(&sVarf_eefELGIi, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_RMzbzYRs, 0.785f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Jx2r2AGL, 1.0f);
  numBytes += cIf_init(&cIf_mbURUggn, true);
  numBytes += sVarf_init(&sVarf_KsAfCbR1, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_JIOudGFy, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_N8TvTak9, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_EQK4s1CH, 1.0f);
  numBytes += cVar_init_f(&cVar_hBdw6o26, 1.0f);
  numBytes += cVar_init_f(&cVar_FUKBdnoV, 0.0f);
  numBytes += cIf_init(&cIf_qwvwFtvA, true);
  numBytes += cVar_init_s(&cVar_fIVclv01, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_ox4PtkBE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vwL9BJBf, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8fvLN5QG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oN1zOyHj, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_miOmxx01, 0.785f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_z3WApGhe, 13.0f);
  numBytes += cDelay_init(this, &cDelay_09dThddW, 0.0f);
  numBytes += sVarf_init(&sVarf_li73qbAw, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QiTl86Of, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7OoXCrfm, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_eGsoEBOS, 1.0f);
  numBytes += cDelay_init(this, &cDelay_PSCPwd1w, 0.0f);
  numBytes += cVar_init_f(&cVar_itEHTrj2, 6.0f);
  numBytes += cVar_init_f(&cVar_Sh0FoThq, 1.0f);
  numBytes += cVar_init_s(&cVar_0aoq6EYO, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_uGbCrA5s, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_iW4GI2wF, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_vpyWLFKn, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_dFzikYAq, 0.0f);
  numBytes += sVarf_init(&sVarf_3bngrdtP, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0VzekF9H, 0.785f, 0.0f, false);
  numBytes += cIf_init(&cIf_ImtSPxH4, true);
  numBytes += sVarf_init(&sVarf_dCwaFRtR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fMLpkCTl, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_WNDVo378, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GD5ku6wj, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_zgUFhuRJ, 0.785f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_LOm5a9FL, 1.0f);
  numBytes += cVar_init_f(&cVar_qBx47nZf, 1.0f);
  numBytes += cIf_init(&cIf_soQ20aoX, true);
  numBytes += cVar_init_f(&cVar_E3W2VEBV, 4.0f);
  numBytes += cVar_init_f(&cVar_4rBOMfrV, 0.0f);
  numBytes += cDelay_init(this, &cDelay_c8pZO7Ge, 0.0f);
  numBytes += cVar_init_s(&cVar_kbcU9sEB, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_XtOUls5X, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_F6mLncx7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_rriK6kZX, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jpxhGu8K, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_wVnT35Ft, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YrM8wzSl, 1.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_lZGCKGwc, true);
  numBytes += cVar_init_f(&cVar_OhMWJBWD, 0.0f);
  numBytes += cVar_init_f(&cVar_FrzrStUc, 14.0f);
  numBytes += sVarf_init(&sVarf_hUy3iVay, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZBcGGgFr, 0.785f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ifDZo2R8, 1.0f);
  numBytes += cVar_init_f(&cVar_17Iulywp, 1.0f);
  numBytes += cDelay_init(this, &cDelay_cmi9iXAI, 0.0f);
  numBytes += cVar_init_s(&cVar_EZX7IUdK, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_O4AlC0Ey, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KYUE9gfa, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0M3iEMCP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xo4pE3Ue, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Smv71KqB, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_fCrvrslZ, 1.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_N28xvVIG, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_R8GIG8OJ, 0.785f, 0.0f, false);
  numBytes += cIf_init(&cIf_mhFeHSno, true);
  numBytes += cDelay_init(this, &cDelay_X2HXxrPK, 0.0f);
  numBytes += cVar_init_f(&cVar_X55ID03k, 0.0f);
  numBytes += cVar_init_s(&cVar_5U2jelMH, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_uM4tpPyg, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_NAmnpI4c, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VOhHVzYv, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_dGkphTtV, 1.0f);
  numBytes += cVar_init_f(&cVar_6tu6KaHH, 1.0f);
  numBytes += cVar_init_f(&cVar_tC2A6JIg, 18.0f);
  numBytes += sVarf_init(&sVarf_fi9LnUjT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Tk5eB9jW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QFvb2OaL, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_ERxGxYZW, 1.0f);
  numBytes += cVar_init_f(&cVar_NRHJpEJV, 1.0f);
  numBytes += cVar_init_f(&cVar_bb1QTdtQ, 15.0f);
  numBytes += cIf_init(&cIf_G84QFxnm, true);
  numBytes += sVarf_init(&sVarf_b5TsHCXG, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xUPcNiyD, 0.785f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_2ZHDS0tp, 0.0f);
  numBytes += cDelay_init(this, &cDelay_bVJKOHPP, 0.0f);
  numBytes += cVar_init_s(&cVar_UAzJoYet, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_zWl3sJkE, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MqgM9UTS, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_meuXxB8N, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ywrIayPx, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_KUwINf2M, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4kL1sGwi, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_fJ8SCBzk, 1.0f);
  numBytes += sVarf_init(&sVarf_ic8CqQQU, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ArnuDUiq, 0.785f, 0.0f, false);
  numBytes += cIf_init(&cIf_IR6XjkT8, true);
  numBytes += cVar_init_f(&cVar_7I87oLJn, 11.0f);
  numBytes += cDelay_init(this, &cDelay_9sakKhNw, 0.0f);
  numBytes += cVar_init_s(&cVar_Zc4elA6z, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_dHCTW8Ly, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xhDDdyDZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_UOPHMNus, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_qZySQTPx, 0.0f);
  numBytes += cVar_init_f(&cVar_0BGaGImt, 1.0f);
  numBytes += sVarf_init(&sVarf_0obmHhjL, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_SUD3RASI, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VNRGvTvC, 1.0f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_7QIovQxc, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_vRjmzzGt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_llNp3KEG, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Or0KXkK7, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_a6MbZXH0, 9.0f);
  numBytes += cVar_init_f(&cVar_7RD8UPJ7, 0.0f);
  numBytes += cVar_init_f(&cVar_gYi8nZEi, 1.0f);
  numBytes += cVar_init_f(&cVar_tGF3P4c1, 1.0f);
  numBytes += sVarf_init(&sVarf_gyqlqmBM, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZG2TDkkQ, 0.785f, 0.0f, false);
  numBytes += cIf_init(&cIf_wyAoFcUE, true);
  numBytes += cDelay_init(this, &cDelay_MgbUV7Zq, 0.0f);
  numBytes += sVarf_init(&sVarf_K9GSeNKT, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_3B3D6T5d, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_AayV8Teb, 1.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_5kxCnje0, true);
  numBytes += cDelay_init(this, &cDelay_k45MEorF, 0.0f);
  numBytes += cVar_init_f(&cVar_kS4bA5Bc, 20.0f);
  numBytes += sVarf_init(&sVarf_65HklZHC, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ZZYT4TBo, 0.785f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_VFah1wuO, 0.0f);
  numBytes += cVar_init_f(&cVar_HboqeV9Y, 1.0f);
  numBytes += cVar_init_s(&cVar_T3bU0Ca9, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_9zJTmOAt, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_qSNddLjm, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_YpZND8K0, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_mllNUCuT, 1.0f);
  numBytes += sVarf_init(&sVarf_MfMGCJwD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xNxXhHMP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_J79giJu1, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_jPGXQyix, 1.0f);
  numBytes += cVar_init_f(&cVar_LOtl3lO1, 8.0f);
  numBytes += cVar_init_f(&cVar_HHQw6KSo, 1.0f);
  numBytes += cVar_init_s(&cVar_3cVO1MnD, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_maOg4g8k, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_oFtFtzYP, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_7HAkZZln, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_7Vd4GScm, true);
  numBytes += cDelay_init(this, &cDelay_QmbE8jH9, 0.0f);
  numBytes += cVar_init_f(&cVar_LybZNThj, 0.0f);
  numBytes += sVarf_init(&sVarf_bHz31RG7, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nrPAMMtz, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_VwTVUAdq, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_0v5v5qaR, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kUrMx431, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_rZMCHyvg, 1.0f);
  numBytes += cVar_init_f(&cVar_5wK4Qrlj, 1.0f);
  numBytes += cDelay_init(this, &cDelay_McGkxrQk, 0.0f);
  numBytes += sVarf_init(&sVarf_RPgowcxs, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QFBfjh3J, 0.785f, 0.0f, false);
  numBytes += cIf_init(&cIf_3LxBrZk4, true);
  numBytes += cVar_init_f(&cVar_22BAfuw1, 7.0f);
  numBytes += cVar_init_f(&cVar_im6dlsB4, 0.0f);
  numBytes += cVar_init_s(&cVar_d0hioWgg, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_FaSyoXt7, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_4zbLoX08, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_ipo8Kuxd, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_yxm3a3WD, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_MjS6wqCb, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_QjWP0bUf, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_QmtaHNQC, 1.0f);
  numBytes += sVarf_init(&sVarf_3F3mnKEo, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_lI8thHgB, 0.785f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_E1IPm21Y, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_2yhGBBPZ, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_hXOVRGBn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_Xy1hjWbm, 0.0f, 0.0f, false);
  numBytes += cIf_init(&cIf_SfzY5M50, true);
  numBytes += cVar_init_f(&cVar_co7qlqs2, 1.0f);
  numBytes += cVar_init_f(&cVar_Q5DLvgVe, 0.0f);
  numBytes += cVar_init_f(&cVar_IJBHCE6A, 1.0f);
  numBytes += cDelay_init(this, &cDelay_ppbRBYMO, 0.0f);
  numBytes += sVarf_init(&sVarf_aUEdUnAn, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_N5xPWr1J, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_xLwYFOQX, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_Cn6BHQWw, 2.0f);
  numBytes += cVar_init_f(&cVar_bnBURjjF, 1.0f);
  numBytes += sVarf_init(&sVarf_QGIDpVop, 0.785f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_8dBEQJ7N, 0.785f, 0.0f, false);
  numBytes += cVar_init_s(&cVar_PApZxX0a, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_XGUOlvoi, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_mTRfQwOW, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_GfJ7d4t3, 0.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_N1GvZLPh, 1.0f);
  numBytes += cIf_init(&cIf_GVqZasz6, true);
  numBytes += cDelay_init(this, &cDelay_Sh5K3LWI, 0.0f);
  numBytes += cVar_init_f(&cVar_psG4BG3X, 0.0f);
  numBytes += sVarf_init(&sVarf_T9F3Wtts, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_jjePMY4u, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_kRxJXBSE, 1.0f, 0.0f, false);
  numBytes += cVar_init_f(&cVar_GwkewOi7, 0.0f);
  numBytes += cVar_init_f(&cVar_XTj3sXvY, 0.0f);
  numBytes += cRandom_init(&cRandom_W5CmFTE6, -279471877);
  numBytes += cSlice_init(&cSlice_NM5SdAP8, 1, 1);
  numBytes += cVar_init_f(&cVar_ZbrH5rrw, 0.0f);
  numBytes += cVar_init_s(&cVar_79NmzfRB, "del-1001-delay");
  numBytes += sVarf_init(&sVarf_STfqpFA8, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_N2T3tXUe, 0.0f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_6r9gZyd1, 0.0f, 0.0f, false);
  numBytes += cDelay_init(this, &cDelay_vordwAo1, 0.0f);
  numBytes += cDelay_init(this, &cDelay_yajvHOnE, 0.0f);
  numBytes += hTable_init(&hTable_sC4of0vj, 256);
  numBytes += cVar_init_f(&cVar_22uAqjd2, 0.0f);
  numBytes += cBinop_init(&cBinop_5Q4qf7XC, 20.0f); // __mul
  numBytes += cRandom_init(&cRandom_kcWSTaDG, 356117145);
  numBytes += cSlice_init(&cSlice_ZblYuNqY, 1, 1);
  numBytes += cBinop_init(&cBinop_TF0lCoKf, 20.0f); // __mul
  numBytes += cRandom_init(&cRandom_qGS8CN6I, 1168710247);
  numBytes += cSlice_init(&cSlice_bBkz8oCo, 1, 1);
  numBytes += cBinop_init(&cBinop_Fw0etIPZ, 0.0f); // __sub
  numBytes += sVarf_init(&sVarf_Gc1cNjPv, 0.76f, 0.0f, false);
  numBytes += sVarf_init(&sVarf_nt1zDSpx, 0.76f, 0.0f, false);
  numBytes += cPack_init(&cPack_P0iYMZIU, 6, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
  numBytes += cPack_init(&cPack_Ly0M8SId, 2, 0.0f, 200.0f);
  numBytes += cSlice_init(&cSlice_ccELYZgN, 1, -1);
  numBytes += cSlice_init(&cSlice_GdtELfcK, 1, -1);
  numBytes += cSlice_init(&cSlice_FN5dJ7vC, 1, -1);
  numBytes += cSlice_init(&cSlice_htyxjUQH, 1, -1);
  numBytes += cSlice_init(&cSlice_8rxgNe8E, 1, -1);
  numBytes += cSlice_init(&cSlice_ypyV8qgC, 1, -1);
  numBytes += cSlice_init(&cSlice_1lOdwQGe, 1, -1);
  numBytes += cSlice_init(&cSlice_qBpAnH42, 1, -1);
  numBytes += cSlice_init(&cSlice_fHtfuzI1, 1, -1);
  numBytes += cSlice_init(&cSlice_KPUrq6uq, 1, -1);
  numBytes += cSlice_init(&cSlice_nRwBFBso, 1, -1);
  numBytes += cSlice_init(&cSlice_pluEtoM6, 1, -1);
  numBytes += cSlice_init(&cSlice_D2gnUpR8, 1, -1);
  numBytes += cSlice_init(&cSlice_w7wqq72s, 1, -1);
  numBytes += cSlice_init(&cSlice_E4WgM4zs, 1, -1);
  numBytes += cSlice_init(&cSlice_RepJMGbV, 1, -1);
  numBytes += cSlice_init(&cSlice_6rBzFaPU, 1, -1);
  numBytes += cSlice_init(&cSlice_tXdTBzIH, 1, -1);
  numBytes += cSlice_init(&cSlice_5wLcqxjA, 1, -1);
  numBytes += cSlice_init(&cSlice_poKK07Gc, 1, -1);
  
  // schedule a message to trigger all loadbangs via the __hv_init receiver
  scheduleMessageForReceiver(0xCE5CC65B, msg_initWithBang(HV_MESSAGE_ON_STACK(1), 0));
}

Heavy_TheCloud::~Heavy_TheCloud() {
  hTable_free(&hTable_sC4of0vj);
  cPack_free(&cPack_P0iYMZIU);
  cPack_free(&cPack_Ly0M8SId);
}

HvTable *Heavy_TheCloud::getTableForHash(hv_uint32_t tableHash) {switch (tableHash) {
    case 0x549A9784: return &hTable_sC4of0vj; // del-1001-delay
    default: return nullptr;
  }
}

void Heavy_TheCloud::scheduleMessageForReceiver(hv_uint32_t receiverHash, HvMessage *m) {
  switch (receiverHash) {
    case 0x6B474AFC: { // 10ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_LWgoqep8_sendMessage);
      break;
    }
    case 0x378CC736: { // 10play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_cs6RDYg3_sendMessage);
      break;
    }
    case 0x793866B6: { // 11ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_h7O3oQ89_sendMessage);
      break;
    }
    case 0xCC0788FA: { // 11play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_HDuqmymy_sendMessage);
      break;
    }
    case 0x84BCBB7E: { // 12ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9bX8v3hC_sendMessage);
      break;
    }
    case 0xD6F3A87A: { // 12play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6Qu1YatM_sendMessage);
      break;
    }
    case 0xBD7001CF: { // 13ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PhWHTwcH_sendMessage);
      break;
    }
    case 0x3EA268A2: { // 13play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_z8OCggQB_sendMessage);
      break;
    }
    case 0xC43C310: { // 14ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1bb2TEll_sendMessage);
      break;
    }
    case 0xB0A95BFE: { // 14play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_FNO1w5WC_sendMessage);
      break;
    }
    case 0xFBE173AF: { // 15ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YtpTX4jd_sendMessage);
      break;
    }
    case 0x9A38EF04: { // 15play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_9tUhinXK_sendMessage);
      break;
    }
    case 0x9B858945: { // 16ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_s9JONWS3_sendMessage);
      break;
    }
    case 0x2A4498C: { // 16play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_OOuWZDWM_sendMessage);
      break;
    }
    case 0x4F4BFC8A: { // 17ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_0IGqqLwp_sendMessage);
      break;
    }
    case 0x3D94CC00: { // 17play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_qN6a2sdO_sendMessage);
      break;
    }
    case 0x200976C7: { // 18ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_VNmajYB3_sendMessage);
      break;
    }
    case 0x9EBBFA47: { // 18play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_lAQ0vDcK_sendMessage);
      break;
    }
    case 0x118E3786: { // 19ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_IKz2Y96B_sendMessage);
      break;
    }
    case 0xD2EAD712: { // 19play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1mjojgLD_sendMessage);
      break;
    }
    case 0x4B5CD832: { // 1ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_nq9t2eWa_sendMessage);
      break;
    }
    case 0x58615DD7: { // 1play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gvIXIMI9_sendMessage);
      break;
    }
    case 0xBC8E7FC6: { // 20ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_SwxZDpSJ_sendMessage);
      break;
    }
    case 0x64DF70E4: { // 20play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_A647drtG_sendMessage);
      break;
    }
    case 0xDEBB260B: { // 2ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_YmbWJEWA_sendMessage);
      break;
    }
    case 0xF5EFF9A2: { // 2play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_DPH6u8Ku_sendMessage);
      break;
    }
    case 0x39EA2A9E: { // 3ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_8gO6GBUw_sendMessage);
      break;
    }
    case 0xF14C191: { // 3play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6WG7OBHE_sendMessage);
      break;
    }
    case 0x8027D90D: { // 4ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_PgPfIAYW_sendMessage);
      break;
    }
    case 0x6E9FFFA3: { // 4play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_NQTx2OK0_sendMessage);
      break;
    }
    case 0x4994719B: { // 5ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_bDNqkxsB_sendMessage);
      break;
    }
    case 0x6287515C: { // 5play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_R0yTIvBK_sendMessage);
      break;
    }
    case 0x318986C: { // 6ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_A7Ilqfg1_sendMessage);
      break;
    }
    case 0x25FA2ACD: { // 6play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_Pl9tsId9_sendMessage);
      break;
    }
    case 0xFD96A571: { // 7ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_I61zm6Vl_sendMessage);
      break;
    }
    case 0x59B9ACF6: { // 7play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hNjSNTLz_sendMessage);
      break;
    }
    case 0x869627E8: { // 8ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_1L4do0pD_sendMessage);
      break;
    }
    case 0xC90A2C82: { // 8play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_TxpRhYxL_sendMessage);
      break;
    }
    case 0xF01BE6C5: { // 9ask
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KGYrK7km_sendMessage);
      break;
    }
    case 0xEAEA0F54: { // 9play
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_w1j8rK21_sendMessage);
      break;
    }
    case 0xCE5CC65B: { // __hv_init
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_ePgHU9AN_sendMessage);
      break;
    }
    case 0xAD0BEFD4: { // density
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_gS94yw7j_sendMessage);
      break;
    }
    case 0x3861AA6D: { // detune
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_6RvBSMdY_sendMessage);
      break;
    }
    case 0x58837609: { // flow
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_hWP3K9JW_sendMessage);
      break;
    }
    case 0xE6B8CF0B: { // grain-ready
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_s48kNVC6_sendMessage);
      break;
    }
    case 0x764F1C36: { // mix
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_dAkTkM3Y_sendMessage);
      break;
    }
    case 0x39CF02DF: { // straight_delay
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_KtoSKeW3_sendMessage);
      break;
    }
    case 0x8E55AA5F: { // time
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_XUBqGUVN_sendMessage);
      break;
    }
    case 0xB53829CF: { // width
      mq_addMessageByTimestamp(&mq, m, 0, &cReceive_19tJtUEr_sendMessage);
      break;
    }
    default: return;
  }
}

int Heavy_TheCloud::getParameterInfo(int index, HvParameterInfo *info) {
  if (info != nullptr) {
    switch (index) {
      case 0: {
        info->name = "density";
        info->hash = 0xAD0BEFD4;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 1.0f;
        info->maxVal = 80.0f;
        info->defaultVal = 20.0f;
        break;
      }
      case 1: {
        info->name = "detune";
        info->hash = 0x3861AA6D;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 2.0f;
        info->maxVal = 200.0f;
        info->defaultVal = 50.0f;
        break;
      }
      case 2: {
        info->name = "flow";
        info->hash = 0x58837609;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 50.0f;
        info->maxVal = 900.0f;
        info->defaultVal = 500.0f;
        break;
      }
      case 3: {
        info->name = "mix";
        info->hash = 0x764F1C36;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.75f;
        break;
      }
      case 4: {
        info->name = "straight_delay";
        info->hash = 0x39CF02DF;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2000.0f;
        info->defaultVal = 0.0f;
        break;
      }
      case 5: {
        info->name = "time";
        info->hash = 0x8E55AA5F;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 2000.0f;
        info->defaultVal = 1000.0f;
        break;
      }
      case 6: {
        info->name = "width";
        info->hash = 0xB53829CF;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 1.0f;
        info->defaultVal = 0.5f;
        break;
      }
      default: {
        info->name = "invalid parameter index";
        info->hash = 0;
        info->type = HvParameterType::HV_PARAM_TYPE_PARAMETER_IN;
        info->minVal = 0.0f;
        info->maxVal = 0.0f;
        info->defaultVal = 0.0f;
        break;
      }
    }
  }
  return 7;
}



/*
 * Send Function Implementations
 */


void Heavy_TheCloud::cVar_JX010fxe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_pVuJiKJR_sendMessage);
  cSwitchcase_8xOnQvLE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_pVuJiKJR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_JX010fxe, 1, m, &cVar_JX010fxe_sendMessage);
}

void Heavy_TheCloud::cVar_ExRYOPVu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MWreXMIK_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cUnop_Hif2h2qv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_iRoYF6jx, m);
}

void Heavy_TheCloud::cUnop_ATJx73fb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gsj2KXaP, m);
}

void Heavy_TheCloud::cBinop_cw48RaoQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_Qtyxam0p_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ATJx73fb_sendMessage);
}

void Heavy_TheCloud::cBinop_Qtyxam0p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Hif2h2qv_sendMessage);
}

void Heavy_TheCloud::cVar_FJBo5813_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_0ByvA5ta_sendMessage);
}

void Heavy_TheCloud::cMsg_kH1NIzRH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_U7xm7hS2_sendMessage);
}

void Heavy_TheCloud::cSystem_U7xm7hS2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ySD49ABU, HV_BINOP_DIVIDE, 1, m, &cBinop_ySD49ABU_sendMessage);
}

void Heavy_TheCloud::cBinop_sUGw6Faz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_z7kE8Q2X_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, -1.0f, 0, m, &cBinop_Ld1QOMrq_sendMessage);
}

void Heavy_TheCloud::cBinop_dhNx6QID_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 0.0f, 0, m, &cBinop_sUGw6Faz_sendMessage);
}

void Heavy_TheCloud::cBinop_Ld1QOMrq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_BApgl2lA, m);
}

void Heavy_TheCloud::cBinop_LBjwtJ0R_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dCM6fXO7, m);
}

void Heavy_TheCloud::cBinop_s8VdCeET_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ySD49ABU, HV_BINOP_DIVIDE, 0, m, &cBinop_ySD49ABU_sendMessage);
}

void Heavy_TheCloud::cBinop_z7kE8Q2X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 0.5f, 0, m, &cBinop_LBjwtJ0R_sendMessage);
}

void Heavy_TheCloud::cBinop_7CG9flzw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MIN, 1.0f, 0, m, &cBinop_dhNx6QID_sendMessage);
}

void Heavy_TheCloud::cBinop_ySD49ABU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_9g7W0ni7_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_0ByvA5ta_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 6.28319f, 0, m, &cBinop_s8VdCeET_sendMessage);
}

void Heavy_TheCloud::cMsg_9g7W0ni7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  msg_setElementToFrom(m, 1, n, 0);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 0.0f, 0, m, &cBinop_7CG9flzw_sendMessage);
}

void Heavy_TheCloud::cVar_8ZMIL9tl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_JhH7t9ui_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_uGEVCo7k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_u8uZKk1w, HV_BINOP_SUBTRACT, 0, m, &cBinop_u8uZKk1w_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_vHaaYKAl_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8cO0KOWL, 0, m, &cSlice_8cO0KOWL_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_sF2QwNNP, 0, m, &cRandom_sF2QwNNP_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_Hn5dma2D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_xfAHP38E_sendMessage);
}

void Heavy_TheCloud::cUnop_xfAHP38E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yMa1je4h, HV_BINOP_ADD, 0, m, &cBinop_yMa1je4h_sendMessage);
}

void Heavy_TheCloud::cRandom_sF2QwNNP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hn5dma2D, HV_BINOP_MULTIPLY, 0, m, &cBinop_Hn5dma2D_sendMessage);
}

void Heavy_TheCloud::cSlice_8cO0KOWL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_sF2QwNNP, 1, m, &cRandom_sF2QwNNP_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_sKFsboeT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_yMa1je4h, HV_BINOP_ADD, 1, m, &cBinop_yMa1je4h_sendMessage);
}

void Heavy_TheCloud::cVar_stXCFcc5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_GREATER_THAN, 0.0f, 0, m, &cBinop_h6fWoHoy_sendMessage);
}

void Heavy_TheCloud::cVar_sca5zyjb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_u8uZKk1w, HV_BINOP_SUBTRACT, 1, m, &cBinop_u8uZKk1w_sendMessage);
}

void Heavy_TheCloud::cUnop_MR8rTx6P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sKFsboeT, 1, m, &cVar_sKFsboeT_sendMessage);
}

void Heavy_TheCloud::cCast_n4u8O26B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sca5zyjb, 0, m, &cVar_sca5zyjb_sendMessage);
  cMsg_GrLJjwan_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_nnvsx4r5_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_n4u8O26B_sendMessage);
      break;
    }
    default: {
      cMsg_oWEy7D6N_sendMessage(_c, 0, m);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_yMa1je4h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_eo43IE7S_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SP4tzhbf_sendMessage);
}

void Heavy_TheCloud::cBinop_0P6J2Enj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P0iYMZIU, 2, m, &cPack_P0iYMZIU_sendMessage);
}

void Heavy_TheCloud::cBinop_u8uZKk1w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Hn5dma2D, HV_BINOP_MULTIPLY, 1, m, &cBinop_Hn5dma2D_sendMessage);
}

void Heavy_TheCloud::cBinop_h6fWoHoy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_nnvsx4r5_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_oWEy7D6N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setBang(m, 0);
  cVar_onMessage(_c, &Context(_c)->cVar_sKFsboeT, 0, m, &cVar_sKFsboeT_sendMessage);
  cMsg_Ilj9IDrC_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_GrLJjwan_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yMa1je4h, HV_BINOP_ADD, 1, m, &cBinop_yMa1je4h_sendMessage);
}

void Heavy_TheCloud::cMsg_Ilj9IDrC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cBinop_onMessage(_c, &Context(_c)->cBinop_u8uZKk1w, HV_BINOP_SUBTRACT, 1, m, &cBinop_u8uZKk1w_sendMessage);
}

void Heavy_TheCloud::cCast_fHyGujfU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uGEVCo7k, 1, m, &cVar_uGEVCo7k_sendMessage);
}

void Heavy_TheCloud::cCast_tygvNGJP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sGP24lOI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SOid6QWE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Uk6uR1YJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iWkKfFdw_sendMessage);
}

void Heavy_TheCloud::cCast_o4oQRsuB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uGEVCo7k, 0, m, &cVar_uGEVCo7k_sendMessage);
}

void Heavy_TheCloud::cCast_Cre2f1ck_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_vHaaYKAl_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cCast_DZQWTrxr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_stXCFcc5, 0, m, &cVar_stXCFcc5_sendMessage);
}

void Heavy_TheCloud::cCast_iWkKfFdw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
}

void Heavy_TheCloud::cCast_sGP24lOI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_ABS, m, &cUnop_MR8rTx6P_sendMessage);
}

void Heavy_TheCloud::cCast_Uk6uR1YJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_stXCFcc5, 1, m, &cVar_stXCFcc5_sendMessage);
}

void Heavy_TheCloud::cCast_SOid6QWE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_sca5zyjb, 1, m, &cVar_sca5zyjb_sendMessage);
}

void Heavy_TheCloud::cCast_eo43IE7S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0P6J2Enj, HV_BINOP_ADD, 0, m, &cBinop_0P6J2Enj_sendMessage);
}

void Heavy_TheCloud::cCast_SP4tzhbf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P0iYMZIU, 1, m, &cPack_P0iYMZIU_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_u3qqYjPZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_O9R5z1Qi, 0, m, &cSlice_O9R5z1Qi_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_j00txyrp, 0, m, &cRandom_j00txyrp_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_agUs1mOh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_lc0f9FWE_sendMessage);
}

void Heavy_TheCloud::cUnop_lc0f9FWE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_52ay1lzL, HV_BINOP_ADD, 1, m, &cBinop_52ay1lzL_sendMessage);
}

void Heavy_TheCloud::cRandom_j00txyrp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_agUs1mOh, HV_BINOP_MULTIPLY, 0, m, &cBinop_agUs1mOh_sendMessage);
}

void Heavy_TheCloud::cSlice_O9R5z1Qi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_j00txyrp, 1, m, &cRandom_j00txyrp_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSwitchcase_c2EYkx2o_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_nlKqYGjC, 0, m, &cSlice_nlKqYGjC_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_yskwo2o5, 0, m, &cRandom_yskwo2o5_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_WrLZnSjc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_YiveQawq_sendMessage);
}

void Heavy_TheCloud::cUnop_YiveQawq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_52ay1lzL, HV_BINOP_ADD, 0, m, &cBinop_52ay1lzL_sendMessage);
}

void Heavy_TheCloud::cRandom_yskwo2o5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WrLZnSjc, HV_BINOP_MULTIPLY, 0, m, &cBinop_WrLZnSjc_sendMessage);
}

void Heavy_TheCloud::cSlice_nlKqYGjC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_yskwo2o5, 1, m, &cRandom_yskwo2o5_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cBinop_52ay1lzL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 50.0f, 0, m, &cBinop_jF6V3JVN_sendMessage);
}

void Heavy_TheCloud::cBinop_jF6V3JVN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P0iYMZIU, 3, m, &cPack_P0iYMZIU_sendMessage);
}

void Heavy_TheCloud::cVar_yaVSM3gs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ef5GbckR, HV_BINOP_SUBTRACT, 0, m, &cBinop_ef5GbckR_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_gXFLZNhL_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_oqpTV3mF, 0, m, &cSlice_oqpTV3mF_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_7lTGZrws, 0, m, &cRandom_7lTGZrws_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_mcKCOr2T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_xM8uDEkS_sendMessage);
}

void Heavy_TheCloud::cUnop_xM8uDEkS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_bHjJvANu_sendMessage);
}

void Heavy_TheCloud::cRandom_7lTGZrws_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_mcKCOr2T_sendMessage);
}

void Heavy_TheCloud::cSlice_oqpTV3mF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_7lTGZrws, 1, m, &cRandom_7lTGZrws_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cBinop_XhAww4uP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P0iYMZIU, 5, m, &cPack_P0iYMZIU_sendMessage);
}

void Heavy_TheCloud::cBinop_c5YoSADM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WUMWlnxk, HV_BINOP_ADD, 0, m, &cBinop_WUMWlnxk_sendMessage);
}

void Heavy_TheCloud::cBinop_WUMWlnxk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 1.57f, 0, m, &cBinop_XhAww4uP_sendMessage);
}

void Heavy_TheCloud::cBinop_ef5GbckR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 2.0f, 0, m, &cBinop_Rf1mO1Ko_sendMessage);
}

void Heavy_TheCloud::cBinop_Rf1mO1Ko_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_WUMWlnxk, HV_BINOP_ADD, 1, m, &cBinop_WUMWlnxk_sendMessage);
}

void Heavy_TheCloud::cBinop_bHjJvANu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_c5YoSADM, HV_BINOP_MULTIPLY, 0, m, &cBinop_c5YoSADM_sendMessage);
}

void Heavy_TheCloud::cCast_NM2hNhQ2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yaVSM3gs, 0, m, &cVar_yaVSM3gs_sendMessage);
}

void Heavy_TheCloud::cCast_t7EiLzFn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_ef5GbckR, HV_BINOP_SUBTRACT, 1, m, &cBinop_ef5GbckR_sendMessage);
}

void Heavy_TheCloud::cVar_1mFQDe7i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_YjytvlJf_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_wjBNKriA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_DH76ZZ35, 0, m, &cSlice_DH76ZZ35_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_6MEfA9F8, 0, m, &cRandom_6MEfA9F8_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_qxzVhZtt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_li4IKGCi_sendMessage);
}

void Heavy_TheCloud::cUnop_li4IKGCi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mRfbemHx, HV_BINOP_LESS_THAN, 0, m, &cBinop_mRfbemHx_sendMessage);
}

void Heavy_TheCloud::cRandom_6MEfA9F8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_qxzVhZtt_sendMessage);
}

void Heavy_TheCloud::cSlice_DH76ZZ35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_6MEfA9F8, 1, m, &cRandom_6MEfA9F8_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_wdIXbJBy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ociaPB9K, 0, m, &cIf_ociaPB9K_sendMessage);
}

void Heavy_TheCloud::cVar_Pg8Dt0mU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_ADD, 1.0f, 0, m, &cBinop_orD87NpD_sendMessage);
}

void Heavy_TheCloud::cDelay_xg1W42HZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_xg1W42HZ, m);
  cVar_onMessage(_c, &Context(_c)->cVar_wdIXbJBy, 0, m, &cVar_wdIXbJBy_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_YkQSQrIF_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_5DFEa4pG_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_5DFEa4pG_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_xg1W42HZ, 1, m, &cDelay_xg1W42HZ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VZkKTwuE_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_5DFEa4pG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_xg1W42HZ, 0, m, &cDelay_xg1W42HZ_sendMessage);
}

void Heavy_TheCloud::cCast_VZkKTwuE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_xg1W42HZ, 0, m, &cDelay_xg1W42HZ_sendMessage);
}

void Heavy_TheCloud::cIf_ociaPB9K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_Pg8Dt0mU, 0, m, &cVar_Pg8Dt0mU_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_q8kOJYDe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_Jei3AadC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cCast_DDnsCoOh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fxVJJDLb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uc1kX9x8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VAOrDGGn_sendMessage);
}

void Heavy_TheCloud::cCast_KQ5xb0sD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_6tZxKJ45_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_d08j6Q31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_EmteqI6s_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_cV4gnwiY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_LYHDOhtw_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_hTP9ab6T_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_FH46zVc6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_VkjHtAZI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_hrwrWP29_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_IdJTLZKr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_3Me2ietv_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_8qhEqV5W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_lk0mid8i_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_d8UITsln_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_LgXSC8dJ_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_LiccyiiL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_LRSoC0cC_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_wUv7IqwM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Jx5LBPOg_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_MVY39ChJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_PnJOfMgS_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_IcEj9aUT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_N7YMyTww_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_lgePSuRW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_EKM4NTXs_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_EFWZ7M3W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_gpHHZsrb_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_qSgQY9Bz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_nOjN6Yzg_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_fD9qA2Ah_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_2dM7f3mQ_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_txiGT4mi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_MSl7JyFX_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_YknCw6Ie_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_tmZ0hU9m_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_tjYM8ab8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_efe9Dc47_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_mkiNvpFc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_37yZhEvw_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_Jei3AadC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KQ5xb0sD_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_d08j6Q31_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_lgePSuRW_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EFWZ7M3W_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qSgQY9Bz_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fD9qA2Ah_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_txiGT4mi_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_YknCw6Ie_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tjYM8ab8_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_mkiNvpFc_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cV4gnwiY_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hTP9ab6T_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VkjHtAZI_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IdJTLZKr_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_8qhEqV5W_sendMessage);
      break;
    }
    case 0x41800000: { // "16.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_d8UITsln_sendMessage);
      break;
    }
    case 0x41880000: { // "17.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LiccyiiL_sendMessage);
      break;
    }
    case 0x41900000: { // "18.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wUv7IqwM_sendMessage);
      break;
    }
    case 0x41980000: { // "19.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_MVY39ChJ_sendMessage);
      break;
    }
    case 0x41A00000: { // "20.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IcEj9aUT_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cCast_oG3qKKOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_HKT980bW_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_5DWs0mo9_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x41A00000: { // "20.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oG3qKKOw_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_orD87NpD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_q8kOJYDe, 0, m, &cVar_q8kOJYDe_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_Pg8Dt0mU, 1, m, &cVar_Pg8Dt0mU_sendMessage);
  cSwitchcase_5DWs0mo9_onMessage(_c, NULL, 0, m, NULL);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_ZDyilsFc_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xOtSxlwu_sendMessage);
}

void Heavy_TheCloud::cMsg_eDRWnj2o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_ociaPB9K, 1, m, &cIf_ociaPB9K_sendMessage);
}

void Heavy_TheCloud::cMsg_qhB8m3eG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Pg8Dt0mU, 1, m, &cVar_Pg8Dt0mU_sendMessage);
}

void Heavy_TheCloud::cMsg_HKT980bW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cIf_onMessage(_c, &Context(_c)->cIf_ociaPB9K, 1, m, &cIf_ociaPB9K_sendMessage);
}

void Heavy_TheCloud::cSend_lk0mid8i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_YtpTX4jd_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_hrwrWP29_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PhWHTwcH_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_gpHHZsrb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_PgPfIAYW_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_MSl7JyFX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_I61zm6Vl_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_FH46zVc6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9bX8v3hC_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_2dM7f3mQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_A7Ilqfg1_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_6tZxKJ45_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_nq9t2eWa_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_PnJOfMgS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_IKz2Y96B_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_EmteqI6s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_YmbWJEWA_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_LRSoC0cC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_0IGqqLwp_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_37yZhEvw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_LWgoqep8_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_LgXSC8dJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s9JONWS3_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_N7YMyTww_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_SwxZDpSJ_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_EKM4NTXs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_8gO6GBUw_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_3Me2ietv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1bb2TEll_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_efe9Dc47_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KGYrK7km_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_LYHDOhtw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_h7O3oQ89_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_Jx5LBPOg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_VNmajYB3_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_nOjN6Yzg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_bDNqkxsB_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_tmZ0hU9m_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1L4do0pD_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_xOtSxlwu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_YkQSQrIF_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cCast_ZDyilsFc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_wdIXbJBy, 1, m, &cVar_wdIXbJBy_sendMessage);
}

void Heavy_TheCloud::cCast_uc1kX9x8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_qhB8m3eG_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_VAOrDGGn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ociaPB9K, 0, m, &cIf_ociaPB9K_sendMessage);
}

void Heavy_TheCloud::cCast_fxVJJDLb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_eDRWnj2o_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cDelay_Lk2JbNiY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Lk2JbNiY, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Lk2JbNiY, 0, m, &cDelay_Lk2JbNiY_sendMessage);
  cSwitchcase_wjBNKriA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cSwitchcase_8xOnQvLE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cMsg_PJx8aJU1_sendMessage(_c, 0, m);
      break;
    }
    case 0x7A5B032D: { // "stop"
      cMsg_PJx8aJU1_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GOPiFGfl_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cCast_GOPiFGfl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_PJx8aJU1_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_Lk2JbNiY, 0, m, &cDelay_Lk2JbNiY_sendMessage);
  cSwitchcase_wjBNKriA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_qJ49dqg6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_RxrWaowK_sendMessage);
}

void Heavy_TheCloud::cSystem_RxrWaowK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_YmIYV6gl_sendMessage);
}

void Heavy_TheCloud::cVar_ISgShoAv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_094oEmrv, HV_BINOP_MULTIPLY, 0, m, &cBinop_094oEmrv_sendMessage);
}

void Heavy_TheCloud::cBinop_094oEmrv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MAX, 1.0f, 0, m, &cBinop_3BBX5QRv_sendMessage);
}

void Heavy_TheCloud::cBinop_YmIYV6gl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_094oEmrv, HV_BINOP_MULTIPLY, 1, m, &cBinop_094oEmrv_sendMessage);
}

void Heavy_TheCloud::cBinop_3BBX5QRv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Lk2JbNiY, 2, m, &cDelay_Lk2JbNiY_sendMessage);
}

void Heavy_TheCloud::cMsg_PJx8aJU1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Lk2JbNiY, 0, m, &cDelay_Lk2JbNiY_sendMessage);
}

void Heavy_TheCloud::cVar_uZHhfHHh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_mRfbemHx, HV_BINOP_LESS_THAN, 1, m, &cBinop_mRfbemHx_sendMessage);
}

void Heavy_TheCloud::cCast_88jJqaS4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fxVJJDLb_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_uc1kX9x8_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VAOrDGGn_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_cRWYqHNw_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_88jJqaS4_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_mRfbemHx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_cRWYqHNw_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cVar_TjVdxK0H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GDJO8AlL, 1, m, &cIf_GDJO8AlL_sendMessage);
}

void Heavy_TheCloud::cVar_n6wTtihw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_34iK3FN0_sendMessage);
  cSwitchcase_UbxcdR9X_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_34iK3FN0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_n6wTtihw, 1, m, &cVar_n6wTtihw_sendMessage);
}

void Heavy_TheCloud::cCast_nfxCINMi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GDJO8AlL, 0, m, &cIf_GDJO8AlL_sendMessage);
}

void Heavy_TheCloud::cIf_GDJO8AlL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_5o6PKJeC, 0, m, &cVar_5o6PKJeC_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_Eqm5Qucl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GDJO8AlL, 1, m, &cIf_GDJO8AlL_sendMessage);
}

void Heavy_TheCloud::cUnop_kidZCwuP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VVYgMAAo, m);
}

void Heavy_TheCloud::cUnop_3uJKrxjy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_wFzy6YW9, m);
}

void Heavy_TheCloud::cBinop_qc4xI9NJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_3uJKrxjy_sendMessage);
}

void Heavy_TheCloud::cDelay_B4ik1iK6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_B4ik1iK6, m);
  cMsg_RjUnoFwF_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_uFdzD0Sn_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_jC47gTmR_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_jC47gTmR_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_B4ik1iK6, 1, m, &cDelay_B4ik1iK6_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Us1WdljY_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_jC47gTmR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_B4ik1iK6, 0, m, &cDelay_B4ik1iK6_sendMessage);
}

void Heavy_TheCloud::cCast_Us1WdljY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_B4ik1iK6, 0, m, &cDelay_B4ik1iK6_sendMessage);
}

void Heavy_TheCloud::cVar_vbAbvgVX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_2vkJTSQT_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_jZgqEGzR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ReuEemBe_sendMessage);
}

void Heavy_TheCloud::cSystem_ReuEemBe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_jViPugRD_sendMessage);
}

void Heavy_TheCloud::cBinop_xwSZR0TS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VZzMLqXh, m);
}

void Heavy_TheCloud::cBinop_jViPugRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_yZoSRGUA, m);
}

void Heavy_TheCloud::cMsg_2vkJTSQT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_8rGbv8FF_sendMessage);
}

void Heavy_TheCloud::cSystem_8rGbv8FF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_xwSZR0TS_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_bPiI0QwA, m);
}

void Heavy_TheCloud::cVar_5o6PKJeC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_DjtDRTHA_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_fMv5Yuua_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Eqm5Qucl, 0, m, &cVar_Eqm5Qucl_sendMessage);
}

void Heavy_TheCloud::cCast_0jOe7Nrx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_TjVdxK0H, 0, m, &cVar_TjVdxK0H_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_UbxcdR9X_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fMv5Yuua_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0jOe7Nrx_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_RjUnoFwF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_n6wTtihw, 0, m, &cVar_n6wTtihw_sendMessage);
  cSwitchcase_UbxcdR9X_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_STPkXisG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_6YDGWA4N, m);
}

void Heavy_TheCloud::cMsg_TxCrGeni_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_kidZCwuP_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_qc4xI9NJ_sendMessage);
}

void Heavy_TheCloud::cMsg_JeLi2mK3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_uFdzD0Sn_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_MH2ofbOK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_qJOMd2sW, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_Ouc2sNOI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_n6wTtihw, 0, m, &cVar_n6wTtihw_sendMessage);
  cSwitchcase_UbxcdR9X_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_amQQjlma_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_qJOMd2sW, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_qJOMd2sW, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_LHiFUfT2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_K74XnqS9, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_K74XnqS9, 0, m, NULL);
}

void Heavy_TheCloud::cSend_DjtDRTHA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_yOGonNnm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6MCx31H4, 1, m, &cIf_6MCx31H4_sendMessage);
}

void Heavy_TheCloud::cVar_i3chmGtY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_9D7Zckf8_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cDelay_4VHBosrJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_4VHBosrJ, m);
  cMsg_ZhLTbgq5_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_naUmL16y_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_3ebtyXB6_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_3ebtyXB6_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_4VHBosrJ, 1, m, &cDelay_4VHBosrJ_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oxbOBsJd_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_3ebtyXB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_4VHBosrJ, 0, m, &cDelay_4VHBosrJ_sendMessage);
}

void Heavy_TheCloud::cCast_oxbOBsJd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_4VHBosrJ, 0, m, &cDelay_4VHBosrJ_sendMessage);
}

void Heavy_TheCloud::cVar_BYkkX9ju_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6MCx31H4, 1, m, &cIf_6MCx31H4_sendMessage);
}

void Heavy_TheCloud::cVar_Askzr8pc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_KO4iB8LJ_sendMessage);
  cSwitchcase_7fMFNgwt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_KO4iB8LJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Askzr8pc, 1, m, &cVar_Askzr8pc_sendMessage);
}

void Heavy_TheCloud::cCast_Iw94qONK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6MCx31H4, 0, m, &cIf_6MCx31H4_sendMessage);
}

void Heavy_TheCloud::cVar_3INM2mrt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B4VbqN0n_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_R5vxIObt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Ov3RnKV2_sendMessage);
}

void Heavy_TheCloud::cSystem_Ov3RnKV2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_WmNvQXAU_sendMessage);
}

void Heavy_TheCloud::cBinop_MfGg08NB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Ji8whKbf, m);
}

void Heavy_TheCloud::cBinop_WmNvQXAU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_kpkYqVuA, m);
}

void Heavy_TheCloud::cMsg_B4VbqN0n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_rxWsnunN_sendMessage);
}

void Heavy_TheCloud::cSystem_rxWsnunN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_MfGg08NB_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Jf94M1OO, m);
}

void Heavy_TheCloud::cUnop_9n0HrVK9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gOAcoRmV, m);
}

void Heavy_TheCloud::cUnop_ZEPwozqR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6uBDEnGR, m);
}

void Heavy_TheCloud::cBinop_wlPvIhc2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ZEPwozqR_sendMessage);
}

void Heavy_TheCloud::cIf_6MCx31H4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_i3chmGtY, 0, m, &cVar_i3chmGtY_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cCast_Fou8s7Qz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_BYkkX9ju, 0, m, &cVar_BYkkX9ju_sendMessage);
}

void Heavy_TheCloud::cCast_zq56V1yp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_yOGonNnm, 0, m, &cVar_yOGonNnm_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_7fMFNgwt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Fou8s7Qz_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zq56V1yp_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_FRGOs4jm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_8NTrJPnd, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_8NTrJPnd, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_EtLzSlO0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_xPwqRDRY, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_xPwqRDRY, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_C8jlZnIY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_naUmL16y_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_dgXR9kF7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_dgyFyp5x, m);
}

void Heavy_TheCloud::cMsg_AcYqxuHO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_xPwqRDRY, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_lzscffwo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Askzr8pc, 0, m, &cVar_Askzr8pc_sendMessage);
  cSwitchcase_7fMFNgwt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_ZhLTbgq5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Askzr8pc, 0, m, &cVar_Askzr8pc_sendMessage);
  cSwitchcase_7fMFNgwt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_c6wwgIOw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_9n0HrVK9_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_wlPvIhc2_sendMessage);
}

void Heavy_TheCloud::cSend_9D7Zckf8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_OokuM466_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nue8rMaJ, 0, m, &cIf_nue8rMaJ_sendMessage);
}

void Heavy_TheCloud::cDelay_gZgYRqyu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_gZgYRqyu, m);
  cMsg_ltMqspHD_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_zSQi9cYp_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_eakCRK73_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_eakCRK73_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_gZgYRqyu, 1, m, &cDelay_gZgYRqyu_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_c5eRsuJs_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_eakCRK73_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_gZgYRqyu, 0, m, &cDelay_gZgYRqyu_sendMessage);
}

void Heavy_TheCloud::cCast_c5eRsuJs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_gZgYRqyu, 0, m, &cDelay_gZgYRqyu_sendMessage);
}

void Heavy_TheCloud::cUnop_Sb3GL8oX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jPCqn6k6, m);
}

void Heavy_TheCloud::cUnop_PNMXjLRH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bOzye91X, m);
}

void Heavy_TheCloud::cBinop_X05COWFL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Sb3GL8oX_sendMessage);
}

void Heavy_TheCloud::cVar_VUcCzHkk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_VrekAQh9_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cIf_nue8rMaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_VUcCzHkk, 0, m, &cVar_VUcCzHkk_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_3BGU8hpQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nue8rMaJ, 1, m, &cIf_nue8rMaJ_sendMessage);
}

void Heavy_TheCloud::cVar_816S8rYa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_0oUWkNDj_sendMessage);
  cSwitchcase_6lkLlgsr_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_0oUWkNDj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_816S8rYa, 1, m, &cVar_816S8rYa_sendMessage);
}

void Heavy_TheCloud::cVar_yXniSoQ9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YWiVO8Gp_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_MPU22GHg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_UnzC5aIi_sendMessage);
}

void Heavy_TheCloud::cSystem_UnzC5aIi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_TVzDKsgm_sendMessage);
}

void Heavy_TheCloud::cBinop_s0A9jMCJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nvwo0U61, m);
}

void Heavy_TheCloud::cBinop_TVzDKsgm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_LKXYBn6q, m);
}

void Heavy_TheCloud::cMsg_YWiVO8Gp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_uXNeoaQQ_sendMessage);
}

void Heavy_TheCloud::cSystem_uXNeoaQQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_s0A9jMCJ_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_3Xjk4ksj, m);
}

void Heavy_TheCloud::cVar_47ysxGPD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nue8rMaJ, 1, m, &cIf_nue8rMaJ_sendMessage);
}

void Heavy_TheCloud::cCast_I1sVUY1P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3BGU8hpQ, 0, m, &cVar_3BGU8hpQ_sendMessage);
}

void Heavy_TheCloud::cCast_XafbwRGX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_47ysxGPD, 0, m, &cVar_47ysxGPD_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_6lkLlgsr_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_I1sVUY1P_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XafbwRGX_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_ltMqspHD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_816S8rYa, 0, m, &cVar_816S8rYa_sendMessage);
  cSwitchcase_6lkLlgsr_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_gLbfuWFv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_ybwTetzy, m);
}

void Heavy_TheCloud::cMsg_O7HLByhM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_816S8rYa, 0, m, &cVar_816S8rYa_sendMessage);
  cSwitchcase_6lkLlgsr_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_RbKPOhmv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_ic6RK1xu, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_JvjGCqOJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_zSQi9cYp_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_Rlm3S3AE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_Ewvj7EN3, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_Ewvj7EN3, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_53j0beas_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_ic6RK1xu, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_ic6RK1xu, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_O4Fysnec_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_PNMXjLRH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_X05COWFL_sendMessage);
}

void Heavy_TheCloud::cSend_VrekAQh9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cDelay_7mTceorB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_7mTceorB, m);
  cMsg_grpekTdh_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_cmrdOKb7_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_H0WzNgrY_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_H0WzNgrY_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_7mTceorB, 1, m, &cDelay_7mTceorB_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_njBuiTil_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_H0WzNgrY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_7mTceorB, 0, m, &cDelay_7mTceorB_sendMessage);
}

void Heavy_TheCloud::cCast_njBuiTil_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_7mTceorB, 0, m, &cDelay_7mTceorB_sendMessage);
}

void Heavy_TheCloud::cVar_jZh192na_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_586duI5G_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_P2lHC7WB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yIoo5RFj, 1, m, &cIf_yIoo5RFj_sendMessage);
}

void Heavy_TheCloud::cVar_LH8FGV9b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_4xsR7mwi_sendMessage);
  cSwitchcase_1qyLuouk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_4xsR7mwi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LH8FGV9b, 1, m, &cVar_LH8FGV9b_sendMessage);
}

void Heavy_TheCloud::cIf_yIoo5RFj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_jZh192na, 0, m, &cVar_jZh192na_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_zxZf6fsN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yIoo5RFj, 1, m, &cIf_yIoo5RFj_sendMessage);
}

void Heavy_TheCloud::cCast_t4HSTZNA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yIoo5RFj, 0, m, &cIf_yIoo5RFj_sendMessage);
}

void Heavy_TheCloud::cUnop_CJD1C1Lx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GiEL5BFn, m);
}

void Heavy_TheCloud::cUnop_WmWR5yJM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xy0UTPMm, m);
}

void Heavy_TheCloud::cBinop_TAsKs9Z8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_CJD1C1Lx_sendMessage);
}

void Heavy_TheCloud::cVar_lhmvVvAF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f9yCkN5B_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_d5htnCFi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BZ1bwbiJ_sendMessage);
}

void Heavy_TheCloud::cSystem_BZ1bwbiJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_IgR623Qf_sendMessage);
}

void Heavy_TheCloud::cBinop_j1Tr9WM5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rBGu3SVx, m);
}

void Heavy_TheCloud::cBinop_IgR623Qf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9zHwqlaG, m);
}

void Heavy_TheCloud::cMsg_f9yCkN5B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_GxwB472x_sendMessage);
}

void Heavy_TheCloud::cSystem_GxwB472x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_j1Tr9WM5_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_pMOsiyrV, m);
}

void Heavy_TheCloud::cCast_7CFrNhz7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_zxZf6fsN, 0, m, &cVar_zxZf6fsN_sendMessage);
}

void Heavy_TheCloud::cCast_zP5eQK0W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_P2lHC7WB, 0, m, &cVar_P2lHC7WB_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_1qyLuouk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7CFrNhz7_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zP5eQK0W_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_DMdCWf34_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_w4sn3Tj5, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_w4sn3Tj5, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_SmwrDIBw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_sxjJuHyY, m);
}

void Heavy_TheCloud::cMsg_BMMT47Ef_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_cmrdOKb7_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_grpekTdh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_LH8FGV9b, 0, m, &cVar_LH8FGV9b_sendMessage);
  cSwitchcase_1qyLuouk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_arsTJ4u6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_sYPbVxki, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_sYPbVxki, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_5VdzYndo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_WmWR5yJM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_TAsKs9Z8_sendMessage);
}

void Heavy_TheCloud::cMsg_mnbni557_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_LH8FGV9b, 0, m, &cVar_LH8FGV9b_sendMessage);
  cSwitchcase_1qyLuouk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_BCjWZcmP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_sYPbVxki, 0, m, NULL);
}

void Heavy_TheCloud::cSend_586duI5G_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cDelay_Fgw6pE1B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Fgw6pE1B, m);
  cMsg_AQIdUmWQ_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_h7ZWeSov_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_mMf6Fu0J_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_mMf6Fu0J_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Fgw6pE1B, 1, m, &cDelay_Fgw6pE1B_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Mgs3uNbQ_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_mMf6Fu0J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Fgw6pE1B, 0, m, &cDelay_Fgw6pE1B_sendMessage);
}

void Heavy_TheCloud::cCast_Mgs3uNbQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Fgw6pE1B, 0, m, &cDelay_Fgw6pE1B_sendMessage);
}

void Heavy_TheCloud::cVar_D9q4DOds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SSHlOcVO, 1, m, &cIf_SSHlOcVO_sendMessage);
}

void Heavy_TheCloud::cMsg_oExT3AAb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_WstwJnJ6_sendMessage);
}

void Heavy_TheCloud::cSystem_WstwJnJ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_bopgfz6H_sendMessage);
}

void Heavy_TheCloud::cVar_SdoMPjsj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_W1oeIfVk_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_87cuET5S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_u0n6KKFj, m);
}

void Heavy_TheCloud::cBinop_bopgfz6H_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XaWACn7L, m);
}

void Heavy_TheCloud::cMsg_W1oeIfVk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BMEhHp7D_sendMessage);
}

void Heavy_TheCloud::cSystem_BMEhHp7D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_87cuET5S_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xpIaDm4E, m);
}

void Heavy_TheCloud::cVar_VWFVDD3S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SSHlOcVO, 1, m, &cIf_SSHlOcVO_sendMessage);
}

void Heavy_TheCloud::cVar_MZkWia28_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_q5H0EVB3_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_FlLbUwX6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SSHlOcVO, 0, m, &cIf_SSHlOcVO_sendMessage);
}

void Heavy_TheCloud::cIf_SSHlOcVO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_MZkWia28, 0, m, &cVar_MZkWia28_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_LoYWBFNH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_iYYWA1bW_sendMessage);
  cSwitchcase_U19auwVz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_iYYWA1bW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LoYWBFNH, 1, m, &cVar_LoYWBFNH_sendMessage);
}

void Heavy_TheCloud::cUnop_Y5ORwLui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_muLA3W5x, m);
}

void Heavy_TheCloud::cUnop_eV6q2Cjy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_JxBiTzgy, m);
}

void Heavy_TheCloud::cBinop_RUtFTVeW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_eV6q2Cjy_sendMessage);
}

void Heavy_TheCloud::cCast_M2HREs61_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VWFVDD3S, 0, m, &cVar_VWFVDD3S_sendMessage);
}

void Heavy_TheCloud::cCast_r5ziHC4d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_D9q4DOds, 0, m, &cVar_D9q4DOds_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_U19auwVz_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_M2HREs61_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_r5ziHC4d_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_lTfrlta2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_h7ZWeSov_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_jKrmEowJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Y5ORwLui_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_RUtFTVeW_sendMessage);
}

void Heavy_TheCloud::cMsg_Okwgt2h7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_LoYWBFNH, 0, m, &cVar_LoYWBFNH_sendMessage);
  cSwitchcase_U19auwVz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_FZemW8tX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_QIUSkDQd, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_QIUSkDQd, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_p9lEIp3r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_5OXNJTTB, m);
}

void Heavy_TheCloud::cMsg_OjdzkQoR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_iJRFhtfY, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_tGLWNlHj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_iJRFhtfY, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_iJRFhtfY, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_AQIdUmWQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_LoYWBFNH, 0, m, &cVar_LoYWBFNH_sendMessage);
  cSwitchcase_U19auwVz_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cSend_q5H0EVB3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_GHaI0AXY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6pOlrK3A, 0, m, &cIf_6pOlrK3A_sendMessage);
}

void Heavy_TheCloud::cIf_6pOlrK3A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_0jFGMpjg, 0, m, &cVar_0jFGMpjg_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_b2sKIeIR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_BmEPxbuV_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_vwN2ZKvr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xuYFDo6w_sendMessage);
}

void Heavy_TheCloud::cSystem_xuYFDo6w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_QPxdRoMe_sendMessage);
}

void Heavy_TheCloud::cBinop_xs4GbwxG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_w2O24xbf, m);
}

void Heavy_TheCloud::cBinop_QPxdRoMe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_fzaGOLVn, m);
}

void Heavy_TheCloud::cMsg_BmEPxbuV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CA69sGlh_sendMessage);
}

void Heavy_TheCloud::cSystem_CA69sGlh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_xs4GbwxG_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_kecHkxil, m);
}

void Heavy_TheCloud::cVar_koMgg00o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6pOlrK3A, 1, m, &cIf_6pOlrK3A_sendMessage);
}

void Heavy_TheCloud::cVar_868nJvL9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_rySe63uI_sendMessage);
  cSwitchcase_PmIIDwCX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_rySe63uI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_868nJvL9, 1, m, &cVar_868nJvL9_sendMessage);
}

void Heavy_TheCloud::cUnop_WLkqObJh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_AS8ifjsZ, m);
}

void Heavy_TheCloud::cUnop_o0bG4NFy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F2D8Nlcw, m);
}

void Heavy_TheCloud::cBinop_lynhM7fC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_WLkqObJh_sendMessage);
}

void Heavy_TheCloud::cDelay_FuW1gfQN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_FuW1gfQN, m);
  cMsg_VRMaZZki_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_9LnUMqAM_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_BQnrHsQN_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_BQnrHsQN_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_FuW1gfQN, 1, m, &cDelay_FuW1gfQN_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_omMNY5oO_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_BQnrHsQN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_FuW1gfQN, 0, m, &cDelay_FuW1gfQN_sendMessage);
}

void Heavy_TheCloud::cCast_omMNY5oO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_FuW1gfQN, 0, m, &cDelay_FuW1gfQN_sendMessage);
}

void Heavy_TheCloud::cVar_0jFGMpjg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_tVrTlB7d_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_z9rDCwKw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6pOlrK3A, 1, m, &cIf_6pOlrK3A_sendMessage);
}

void Heavy_TheCloud::cCast_iNgnygxE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_koMgg00o, 0, m, &cVar_koMgg00o_sendMessage);
}

void Heavy_TheCloud::cCast_DG1bHvmd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_z9rDCwKw, 0, m, &cVar_z9rDCwKw_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_PmIIDwCX_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_iNgnygxE_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DG1bHvmd_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_3HANGC4P_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_mE9SYTCk, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_mE9SYTCk, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_pZRRZ0Tn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_9LnUMqAM_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_bV2zOSUq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Hlthdacx, m);
}

void Heavy_TheCloud::cMsg_cSfJFwmj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_eSYj7B2s, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_eSYj7B2s, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_VRMaZZki_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_868nJvL9, 0, m, &cVar_868nJvL9_sendMessage);
  cSwitchcase_PmIIDwCX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_uhXqdPXM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_868nJvL9, 0, m, &cVar_868nJvL9_sendMessage);
  cSwitchcase_PmIIDwCX_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_jnheMRC5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_o0bG4NFy_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_lynhM7fC_sendMessage);
}

void Heavy_TheCloud::cMsg_dRLRHSRY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_mE9SYTCk, 0, m, NULL);
}

void Heavy_TheCloud::cSend_tVrTlB7d_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_L7nqwuYv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mbURUggn, 1, m, &cIf_mbURUggn_sendMessage);
}

void Heavy_TheCloud::cVar_3ZP8TxoL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mbURUggn, 1, m, &cIf_mbURUggn_sendMessage);
}

void Heavy_TheCloud::cCast_jH1EPoLJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mbURUggn, 0, m, &cIf_mbURUggn_sendMessage);
}

void Heavy_TheCloud::cVar_5sbJKa4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_fYQdx52r_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_XX86nKmQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_C4LFCb1b_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_u0IArHRD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CGdoytt9_sendMessage);
}

void Heavy_TheCloud::cSystem_CGdoytt9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_k3lUfwtH_sendMessage);
}

void Heavy_TheCloud::cBinop_WWjUa95e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XNmAWP2X, m);
}

void Heavy_TheCloud::cBinop_k3lUfwtH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_jYxQMstI, m);
}

void Heavy_TheCloud::cMsg_C4LFCb1b_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Le129ST3_sendMessage);
}

void Heavy_TheCloud::cSystem_Le129ST3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_WWjUa95e_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_J6EuETfK, m);
}

void Heavy_TheCloud::cDelay_8UvK80ji_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_8UvK80ji, m);
  cMsg_CR0uNq5A_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_NTgoVyFc_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_e0bIpOFM_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_e0bIpOFM_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_8UvK80ji, 1, m, &cDelay_8UvK80ji_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_qjFADr9y_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_e0bIpOFM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_8UvK80ji, 0, m, &cDelay_8UvK80ji_sendMessage);
}

void Heavy_TheCloud::cCast_qjFADr9y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_8UvK80ji, 0, m, &cDelay_8UvK80ji_sendMessage);
}

void Heavy_TheCloud::cUnop_9Onno1ul_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_eefELGIi, m);
}

void Heavy_TheCloud::cUnop_oresT0jT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RMzbzYRs, m);
}

void Heavy_TheCloud::cBinop_KAwKdMsL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_oresT0jT_sendMessage);
}

void Heavy_TheCloud::cVar_Jx2r2AGL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_WDGXZQzT_sendMessage);
  cSwitchcase_uYn0zsQa_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_WDGXZQzT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Jx2r2AGL, 1, m, &cVar_Jx2r2AGL_sendMessage);
}

void Heavy_TheCloud::cIf_mbURUggn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_5sbJKa4g, 0, m, &cVar_5sbJKa4g_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cCast_yea2y6sg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_L7nqwuYv, 0, m, &cVar_L7nqwuYv_sendMessage);
}

void Heavy_TheCloud::cCast_QuKQT3xJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_3ZP8TxoL, 0, m, &cVar_3ZP8TxoL_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_uYn0zsQa_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_yea2y6sg_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_QuKQT3xJ_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_vjElU3SN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_NdbNwyQH, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_NdbNwyQH, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_OaRXqNNW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_Msc4LKex, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_Msc4LKex, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_mdTABBTS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_N8TvTak9, m);
}

void Heavy_TheCloud::cMsg_CR0uNq5A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Jx2r2AGL, 0, m, &cVar_Jx2r2AGL_sendMessage);
  cSwitchcase_uYn0zsQa_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_cJg3Sp7I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_NTgoVyFc_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_QZjrWLUV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_Msc4LKex, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_pRYcCu5Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Jx2r2AGL, 0, m, &cVar_Jx2r2AGL_sendMessage);
  cSwitchcase_uYn0zsQa_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_HUxfknZz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_9Onno1ul_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_KAwKdMsL_sendMessage);
}

void Heavy_TheCloud::cSend_fYQdx52r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_EQK4s1CH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qwvwFtvA, 1, m, &cIf_qwvwFtvA_sendMessage);
}

void Heavy_TheCloud::cCast_edHO2nEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qwvwFtvA, 0, m, &cIf_qwvwFtvA_sendMessage);
}

void Heavy_TheCloud::cVar_hBdw6o26_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_Nrwj72X8_sendMessage);
  cSwitchcase_ipOrzlmI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_Nrwj72X8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_hBdw6o26, 1, m, &cVar_hBdw6o26_sendMessage);
}

void Heavy_TheCloud::cVar_FUKBdnoV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qwvwFtvA, 1, m, &cIf_qwvwFtvA_sendMessage);
}

void Heavy_TheCloud::cIf_qwvwFtvA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_z3WApGhe, 0, m, &cVar_z3WApGhe_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cMsg_ABD2DF6x_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_0JQw0B0K_sendMessage);
}

void Heavy_TheCloud::cSystem_0JQw0B0K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_YxjV9ODI_sendMessage);
}

void Heavy_TheCloud::cVar_fIVclv01_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LF0t2m87_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_3KYSntVB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ox4PtkBE, m);
}

void Heavy_TheCloud::cBinop_YxjV9ODI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vwL9BJBf, m);
}

void Heavy_TheCloud::cMsg_LF0t2m87_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_SMdTL5ap_sendMessage);
}

void Heavy_TheCloud::cSystem_SMdTL5ap_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_3KYSntVB_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_8fvLN5QG, m);
}

void Heavy_TheCloud::cUnop_038ZMl5e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_oN1zOyHj, m);
}

void Heavy_TheCloud::cUnop_YHFiomZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_miOmxx01, m);
}

void Heavy_TheCloud::cBinop_PKd4GRXG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_038ZMl5e_sendMessage);
}

void Heavy_TheCloud::cVar_z3WApGhe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_9hz1EN0o_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cDelay_09dThddW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_09dThddW, m);
  cMsg_QVtIOD03_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_5I1zWg6x_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_O5m5lFtz_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_O5m5lFtz_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_09dThddW, 1, m, &cDelay_09dThddW_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Suqd6wn1_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_O5m5lFtz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_09dThddW, 0, m, &cDelay_09dThddW_sendMessage);
}

void Heavy_TheCloud::cCast_Suqd6wn1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_09dThddW, 0, m, &cDelay_09dThddW_sendMessage);
}

void Heavy_TheCloud::cCast_b5UyAURs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_EQK4s1CH, 0, m, &cVar_EQK4s1CH_sendMessage);
}

void Heavy_TheCloud::cCast_7hR111rW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_FUKBdnoV, 0, m, &cVar_FUKBdnoV_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_ipOrzlmI_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_b5UyAURs_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7hR111rW_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_wWjmK82S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_mJeytBZi, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_YTDzN8WW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_Byakhyio, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_Byakhyio, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_Pjnl06CX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_7OoXCrfm, m);
}

void Heavy_TheCloud::cMsg_h3U7bi4K_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_mJeytBZi, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_mJeytBZi, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_o2KmZxrN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_YHFiomZf_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_PKd4GRXG_sendMessage);
}

void Heavy_TheCloud::cMsg_TjbZYi5M_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_5I1zWg6x_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_80Zm69XD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_hBdw6o26, 0, m, &cVar_hBdw6o26_sendMessage);
  cSwitchcase_ipOrzlmI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_QVtIOD03_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_hBdw6o26, 0, m, &cVar_hBdw6o26_sendMessage);
  cSwitchcase_ipOrzlmI_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cSend_9hz1EN0o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_eGsoEBOS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ImtSPxH4, 1, m, &cIf_ImtSPxH4_sendMessage);
}

void Heavy_TheCloud::cDelay_PSCPwd1w_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_PSCPwd1w, m);
  cMsg_4qg8iI9t_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_YlSgEGlk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_BGPlSxDT_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_BGPlSxDT_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_PSCPwd1w, 1, m, &cDelay_PSCPwd1w_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_0qZz41Fz_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_BGPlSxDT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_PSCPwd1w, 0, m, &cDelay_PSCPwd1w_sendMessage);
}

void Heavy_TheCloud::cCast_0qZz41Fz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_PSCPwd1w, 0, m, &cDelay_PSCPwd1w_sendMessage);
}

void Heavy_TheCloud::cVar_itEHTrj2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_UhlZ7CKs_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_AsGTZKyj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ImtSPxH4, 0, m, &cIf_ImtSPxH4_sendMessage);
}

void Heavy_TheCloud::cVar_Sh0FoThq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_LmNx295l_sendMessage);
  cSwitchcase_CJ5YYFov_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_LmNx295l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Sh0FoThq, 1, m, &cVar_Sh0FoThq_sendMessage);
}

void Heavy_TheCloud::cVar_0aoq6EYO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_8qzjHftr_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_OKGJqhyD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Hd27caWx_sendMessage);
}

void Heavy_TheCloud::cSystem_Hd27caWx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_gOFWdBCK_sendMessage);
}

void Heavy_TheCloud::cBinop_9dZ9Kn8n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vpyWLFKn, m);
}

void Heavy_TheCloud::cBinop_gOFWdBCK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_uGbCrA5s, m);
}

void Heavy_TheCloud::cMsg_8qzjHftr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_JoZrFzFq_sendMessage);
}

void Heavy_TheCloud::cSystem_JoZrFzFq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_9dZ9Kn8n_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_iW4GI2wF, m);
}

void Heavy_TheCloud::cVar_dFzikYAq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ImtSPxH4, 1, m, &cIf_ImtSPxH4_sendMessage);
}

void Heavy_TheCloud::cUnop_DY03SvWy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3bngrdtP, m);
}

void Heavy_TheCloud::cUnop_xNXTo08S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0VzekF9H, m);
}

void Heavy_TheCloud::cBinop_rdkJ9V67_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_xNXTo08S_sendMessage);
}

void Heavy_TheCloud::cIf_ImtSPxH4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_itEHTrj2, 0, m, &cVar_itEHTrj2_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cCast_ac4VUQlc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_eGsoEBOS, 0, m, &cVar_eGsoEBOS_sendMessage);
}

void Heavy_TheCloud::cCast_pJKT9yG5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dFzikYAq, 0, m, &cVar_dFzikYAq_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_CJ5YYFov_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ac4VUQlc_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pJKT9yG5_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_4qg8iI9t_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Sh0FoThq, 0, m, &cVar_Sh0FoThq_sendMessage);
  cSwitchcase_CJ5YYFov_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_Zlrn8Iwg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_YlSgEGlk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_8z6fbwbJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_DY03SvWy_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_rdkJ9V67_sendMessage);
}

void Heavy_TheCloud::cMsg_YTZG2t6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_rOdG8ARk, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_lFup5S87_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_Sh0FoThq, 0, m, &cVar_Sh0FoThq_sendMessage);
  cSwitchcase_CJ5YYFov_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_f1DAhJ1X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_Vd89jAeG, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_Vd89jAeG, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_PLLv6aYN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_WNDVo378, m);
}

void Heavy_TheCloud::cMsg_TG0N13op_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_rOdG8ARk, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_rOdG8ARk, 0, m, NULL);
}

void Heavy_TheCloud::cSend_UhlZ7CKs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cUnop_W47LhFj8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zgUFhuRJ, m);
}

void Heavy_TheCloud::cUnop_T0DiDbZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GD5ku6wj, m);
}

void Heavy_TheCloud::cBinop_mkSIxclb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_T0DiDbZf_sendMessage);
}

void Heavy_TheCloud::cVar_LOm5a9FL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_kbRq88Qm_sendMessage);
  cSwitchcase_cBK2iyrA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_kbRq88Qm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LOm5a9FL, 1, m, &cVar_LOm5a9FL_sendMessage);
}

void Heavy_TheCloud::cVar_qBx47nZf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_soQ20aoX, 1, m, &cIf_soQ20aoX_sendMessage);
}

void Heavy_TheCloud::cIf_soQ20aoX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_E3W2VEBV, 0, m, &cVar_E3W2VEBV_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_E3W2VEBV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_rfJKaMGi_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_4rBOMfrV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_soQ20aoX, 1, m, &cIf_soQ20aoX_sendMessage);
}

void Heavy_TheCloud::cDelay_c8pZO7Ge_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_c8pZO7Ge, m);
  cMsg_udy4x57D_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_UqyDKIZB_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_E89uQ7kX_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_E89uQ7kX_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_c8pZO7Ge, 1, m, &cDelay_c8pZO7Ge_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_P3WYfN3O_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_E89uQ7kX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_c8pZO7Ge, 0, m, &cDelay_c8pZO7Ge_sendMessage);
}

void Heavy_TheCloud::cCast_P3WYfN3O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_c8pZO7Ge, 0, m, &cDelay_c8pZO7Ge_sendMessage);
}

void Heavy_TheCloud::cMsg_KhAEHc0N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_PZ4fJMpA_sendMessage);
}

void Heavy_TheCloud::cSystem_PZ4fJMpA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_QCnMoSyQ_sendMessage);
}

void Heavy_TheCloud::cVar_kbcU9sEB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_B7jXhOUZ_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_xkU2jqL2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_rriK6kZX, m);
}

void Heavy_TheCloud::cBinop_QCnMoSyQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_F6mLncx7, m);
}

void Heavy_TheCloud::cMsg_B7jXhOUZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_2CNvXu1r_sendMessage);
}

void Heavy_TheCloud::cSystem_2CNvXu1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_xkU2jqL2_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_XtOUls5X, m);
}

void Heavy_TheCloud::cCast_NwLXyuHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_soQ20aoX, 0, m, &cIf_soQ20aoX_sendMessage);
}

void Heavy_TheCloud::cCast_rW1zRnI3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qBx47nZf, 0, m, &cVar_qBx47nZf_sendMessage);
}

void Heavy_TheCloud::cCast_XdOyZ5M4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_4rBOMfrV, 0, m, &cVar_4rBOMfrV_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_cBK2iyrA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_rW1zRnI3_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_XdOyZ5M4_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_H5ODsKn4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_W47LhFj8_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_mkSIxclb_sendMessage);
}

void Heavy_TheCloud::cMsg_yMLBJvvS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_LOm5a9FL, 0, m, &cVar_LOm5a9FL_sendMessage);
  cSwitchcase_cBK2iyrA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_5C0DAkOC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_ozqSavGP, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_lL971air_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_YrM8wzSl, m);
}

void Heavy_TheCloud::cMsg_UoOj9w5l_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_UqyDKIZB_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_EbtomydH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_ozqSavGP, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_ozqSavGP, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_udy4x57D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_LOm5a9FL, 0, m, &cVar_LOm5a9FL_sendMessage);
  cSwitchcase_cBK2iyrA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_xezFP850_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_r9ATdssl, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_r9ATdssl, 0, m, NULL);
}

void Heavy_TheCloud::cSend_rfJKaMGi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cIf_lZGCKGwc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_FrzrStUc, 0, m, &cVar_FrzrStUc_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_OhMWJBWD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_lZGCKGwc, 1, m, &cIf_lZGCKGwc_sendMessage);
}

void Heavy_TheCloud::cVar_FrzrStUc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_cmXsi2jN_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cUnop_ZZRgrRn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZBcGGgFr, m);
}

void Heavy_TheCloud::cUnop_ma2Kuta7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hUy3iVay, m);
}

void Heavy_TheCloud::cBinop_by6liJ6V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ZZRgrRn6_sendMessage);
}

void Heavy_TheCloud::cVar_ifDZo2R8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_lZGCKGwc, 1, m, &cIf_lZGCKGwc_sendMessage);
}

void Heavy_TheCloud::cCast_TObNpsqX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_lZGCKGwc, 0, m, &cIf_lZGCKGwc_sendMessage);
}

void Heavy_TheCloud::cVar_17Iulywp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_51Ji5hJk_sendMessage);
  cSwitchcase_xLCAbJtY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_51Ji5hJk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_17Iulywp, 1, m, &cVar_17Iulywp_sendMessage);
}

void Heavy_TheCloud::cDelay_cmi9iXAI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_cmi9iXAI, m);
  cMsg_h4APSML3_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_tMZ8aVGZ_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_OIAzJ6C3_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_OIAzJ6C3_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_cmi9iXAI, 1, m, &cDelay_cmi9iXAI_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_oK6q1VQR_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_OIAzJ6C3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_cmi9iXAI, 0, m, &cDelay_cmi9iXAI_sendMessage);
}

void Heavy_TheCloud::cCast_oK6q1VQR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_cmi9iXAI, 0, m, &cDelay_cmi9iXAI_sendMessage);
}

void Heavy_TheCloud::cMsg_Uz1SwQ0g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_BWGMIeGh_sendMessage);
}

void Heavy_TheCloud::cSystem_BWGMIeGh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_dBAusSDZ_sendMessage);
}

void Heavy_TheCloud::cVar_EZX7IUdK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ld3oAj33_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_dBF7LEFt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_0M3iEMCP, m);
}

void Heavy_TheCloud::cBinop_dBAusSDZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_KYUE9gfa, m);
}

void Heavy_TheCloud::cMsg_ld3oAj33_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vLePRKnx_sendMessage);
}

void Heavy_TheCloud::cSystem_vLePRKnx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_dBF7LEFt_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_O4AlC0Ey, m);
}

void Heavy_TheCloud::cCast_wAghuOmd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ifDZo2R8, 0, m, &cVar_ifDZo2R8_sendMessage);
}

void Heavy_TheCloud::cCast_sDrSzt9e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_OhMWJBWD, 0, m, &cVar_OhMWJBWD_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_xLCAbJtY_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_wAghuOmd_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_sDrSzt9e_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_yta9FMiy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_xJnplTCJ, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_h4APSML3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_17Iulywp, 0, m, &cVar_17Iulywp_sendMessage);
  cSwitchcase_xLCAbJtY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_B0neuq6L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_xJnplTCJ, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_xJnplTCJ, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_nVXwZvzt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_fCrvrslZ, m);
}

void Heavy_TheCloud::cMsg_EyGLPa8p_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_17Iulywp, 0, m, &cVar_17Iulywp_sendMessage);
  cSwitchcase_xLCAbJtY_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_ppE9pjtH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_tMZ8aVGZ_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_NuAnOCIj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_NCMr4Wgc, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_NCMr4Wgc, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_ilPtPG5a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_ma2Kuta7_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_by6liJ6V_sendMessage);
}

void Heavy_TheCloud::cSend_cmXsi2jN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cUnop_wQGXUJQI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_N28xvVIG, m);
}

void Heavy_TheCloud::cUnop_DPJ7jseP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_R8GIG8OJ, m);
}

void Heavy_TheCloud::cBinop_PqJI4jks_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_DPJ7jseP_sendMessage);
}

void Heavy_TheCloud::cIf_mhFeHSno_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_tC2A6JIg, 0, m, &cVar_tC2A6JIg_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cCast_VKLa1FZ6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mhFeHSno, 0, m, &cIf_mhFeHSno_sendMessage);
}

void Heavy_TheCloud::cDelay_X2HXxrPK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_X2HXxrPK, m);
  cMsg_qn0BPIWP_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_TEmTmcjK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_4gFP4o9c_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_4gFP4o9c_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_X2HXxrPK, 1, m, &cDelay_X2HXxrPK_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_2SME46kE_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_4gFP4o9c_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_X2HXxrPK, 0, m, &cDelay_X2HXxrPK_sendMessage);
}

void Heavy_TheCloud::cCast_2SME46kE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_X2HXxrPK, 0, m, &cDelay_X2HXxrPK_sendMessage);
}

void Heavy_TheCloud::cVar_X55ID03k_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mhFeHSno, 1, m, &cIf_mhFeHSno_sendMessage);
}

void Heavy_TheCloud::cMsg_nvhf8D83_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_sB4aHU6r_sendMessage);
}

void Heavy_TheCloud::cSystem_sB4aHU6r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_emEMS9l1_sendMessage);
}

void Heavy_TheCloud::cVar_5U2jelMH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_m61MFGUD_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_XAUpO1YG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_VOhHVzYv, m);
}

void Heavy_TheCloud::cBinop_emEMS9l1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_uM4tpPyg, m);
}

void Heavy_TheCloud::cMsg_m61MFGUD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_EaHMluzX_sendMessage);
}

void Heavy_TheCloud::cSystem_EaHMluzX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_XAUpO1YG_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_NAmnpI4c, m);
}

void Heavy_TheCloud::cVar_dGkphTtV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_trKE5KBP_sendMessage);
  cSwitchcase_m5gkWc5R_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_trKE5KBP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_dGkphTtV, 1, m, &cVar_dGkphTtV_sendMessage);
}

void Heavy_TheCloud::cVar_6tu6KaHH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mhFeHSno, 1, m, &cIf_mhFeHSno_sendMessage);
}

void Heavy_TheCloud::cVar_tC2A6JIg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_eci8R6zd_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_O1YTCRwl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_6tu6KaHH, 0, m, &cVar_6tu6KaHH_sendMessage);
}

void Heavy_TheCloud::cCast_cDG6cPB6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_X55ID03k, 0, m, &cVar_X55ID03k_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_m5gkWc5R_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_O1YTCRwl_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_cDG6cPB6_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_cZL0SSEw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_QFvb2OaL, m);
}

void Heavy_TheCloud::cMsg_NGlKaOco_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_dGkphTtV, 0, m, &cVar_dGkphTtV_sendMessage);
  cSwitchcase_m5gkWc5R_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_cOzAzzL4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_ImvOqxqQ, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_ImvOqxqQ, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_dEISZtG0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_LoYXT3xz, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_LoYXT3xz, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_bXbO3htw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_ImvOqxqQ, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_XWnOEJZq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_TEmTmcjK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_WN1mBn4U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_wQGXUJQI_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_PqJI4jks_sendMessage);
}

void Heavy_TheCloud::cMsg_qn0BPIWP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_dGkphTtV, 0, m, &cVar_dGkphTtV_sendMessage);
  cSwitchcase_m5gkWc5R_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cSend_eci8R6zd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_ERxGxYZW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_G84QFxnm, 1, m, &cIf_G84QFxnm_sendMessage);
}

void Heavy_TheCloud::cCast_0m4V9WAY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_G84QFxnm, 0, m, &cIf_G84QFxnm_sendMessage);
}

void Heavy_TheCloud::cVar_NRHJpEJV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_UONhETq0_sendMessage);
  cSwitchcase_n699Oz82_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_UONhETq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_NRHJpEJV, 1, m, &cVar_NRHJpEJV_sendMessage);
}

void Heavy_TheCloud::cVar_bb1QTdtQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_Cq7IX6Sl_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cIf_G84QFxnm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_bb1QTdtQ, 0, m, &cVar_bb1QTdtQ_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cUnop_2Mf2ouWM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_xUPcNiyD, m);
}

void Heavy_TheCloud::cUnop_MewWwPpJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_b5TsHCXG, m);
}

void Heavy_TheCloud::cBinop_I7wEtXS2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_2Mf2ouWM_sendMessage);
}

void Heavy_TheCloud::cVar_2ZHDS0tp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_G84QFxnm, 1, m, &cIf_G84QFxnm_sendMessage);
}

void Heavy_TheCloud::cDelay_bVJKOHPP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_bVJKOHPP, m);
  cMsg_Tf6gyeqM_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_R624WFsO_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_CLHELe9L_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_CLHELe9L_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_bVJKOHPP, 1, m, &cDelay_bVJKOHPP_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xkkSFd2z_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_CLHELe9L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_bVJKOHPP, 0, m, &cDelay_bVJKOHPP_sendMessage);
}

void Heavy_TheCloud::cCast_xkkSFd2z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_bVJKOHPP, 0, m, &cDelay_bVJKOHPP_sendMessage);
}

void Heavy_TheCloud::cMsg_5uVfuawK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Vaeyqlx5_sendMessage);
}

void Heavy_TheCloud::cSystem_Vaeyqlx5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_NxQXDAUi_sendMessage);
}

void Heavy_TheCloud::cVar_UAzJoYet_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_VlaPC6qp_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_U2YyFrCm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_MqgM9UTS, m);
}

void Heavy_TheCloud::cBinop_NxQXDAUi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_zWl3sJkE, m);
}

void Heavy_TheCloud::cMsg_VlaPC6qp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_fxY5aTCE_sendMessage);
}

void Heavy_TheCloud::cSystem_fxY5aTCE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_U2YyFrCm_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_meuXxB8N, m);
}

void Heavy_TheCloud::cCast_9I1hHIOU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_ERxGxYZW, 0, m, &cVar_ERxGxYZW_sendMessage);
}

void Heavy_TheCloud::cCast_LA3fpj9L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_2ZHDS0tp, 0, m, &cVar_2ZHDS0tp_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_n699Oz82_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_9I1hHIOU_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_LA3fpj9L_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_Irfoh702_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_MewWwPpJ_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_I7wEtXS2_sendMessage);
}

void Heavy_TheCloud::cMsg_F0cVGa1A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_WYvesEtM, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_GlWKFSQW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_WYvesEtM, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_WYvesEtM, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_NAMKyMn6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_4kL1sGwi, m);
}

void Heavy_TheCloud::cMsg_Tf6gyeqM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_NRHJpEJV, 0, m, &cVar_NRHJpEJV_sendMessage);
  cSwitchcase_n699Oz82_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_EalFpGEG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_R624WFsO_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_X2Hnjexd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_GYEWKr57, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_GYEWKr57, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_1KmtEb3Q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_NRHJpEJV, 0, m, &cVar_NRHJpEJV_sendMessage);
  cSwitchcase_n699Oz82_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cSend_Cq7IX6Sl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_VIZ2INn8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IR6XjkT8, 0, m, &cIf_IR6XjkT8_sendMessage);
}

void Heavy_TheCloud::cVar_fJ8SCBzk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_fBatjYTp_sendMessage);
  cSwitchcase_AemBOmsT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_fBatjYTp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_fJ8SCBzk, 1, m, &cVar_fJ8SCBzk_sendMessage);
}

void Heavy_TheCloud::cUnop_uB1iDYr6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ArnuDUiq, m);
}

void Heavy_TheCloud::cUnop_sptJjUTH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ic8CqQQU, m);
}

void Heavy_TheCloud::cBinop_YXPjUTVp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_uB1iDYr6_sendMessage);
}

void Heavy_TheCloud::cIf_IR6XjkT8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_7I87oLJn, 0, m, &cVar_7I87oLJn_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_7I87oLJn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_JHzqFp50_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cDelay_9sakKhNw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_9sakKhNw, m);
  cMsg_oNTU3i19_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_g2kpODgH_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_nXpj8y5W_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_nXpj8y5W_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_9sakKhNw, 1, m, &cDelay_9sakKhNw_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RCez1pt4_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_nXpj8y5W_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_9sakKhNw, 0, m, &cDelay_9sakKhNw_sendMessage);
}

void Heavy_TheCloud::cCast_RCez1pt4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_9sakKhNw, 0, m, &cDelay_9sakKhNw_sendMessage);
}

void Heavy_TheCloud::cVar_Zc4elA6z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DeFIU1Ia_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_7YXZoGgu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZIm3atUS_sendMessage);
}

void Heavy_TheCloud::cSystem_ZIm3atUS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_buEMhlCP_sendMessage);
}

void Heavy_TheCloud::cBinop_Fv1YMMZR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_dHCTW8Ly, m);
}

void Heavy_TheCloud::cBinop_buEMhlCP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_UOPHMNus, m);
}

void Heavy_TheCloud::cMsg_DeFIU1Ia_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_LlU5swP4_sendMessage);
}

void Heavy_TheCloud::cSystem_LlU5swP4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Fv1YMMZR_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xhDDdyDZ, m);
}

void Heavy_TheCloud::cVar_qZySQTPx_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IR6XjkT8, 1, m, &cIf_IR6XjkT8_sendMessage);
}

void Heavy_TheCloud::cVar_0BGaGImt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IR6XjkT8, 1, m, &cIf_IR6XjkT8_sendMessage);
}

void Heavy_TheCloud::cCast_GOnvUaPw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_0BGaGImt, 0, m, &cVar_0BGaGImt_sendMessage);
}

void Heavy_TheCloud::cCast_zjERFjjp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_qZySQTPx, 0, m, &cVar_qZySQTPx_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_AemBOmsT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_GOnvUaPw_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_zjERFjjp_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_HWymEj74_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_sptJjUTH_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_YXPjUTVp_sendMessage);
}

void Heavy_TheCloud::cMsg_tABFTrp4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_nVKIv82n, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_E3ut12xY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_g2kpODgH_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_6HhR601U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_fJ8SCBzk, 0, m, &cVar_fJ8SCBzk_sendMessage);
  cSwitchcase_AemBOmsT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_oNTU3i19_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_fJ8SCBzk, 0, m, &cVar_fJ8SCBzk_sendMessage);
  cSwitchcase_AemBOmsT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_U3zDkXht_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_VNRGvTvC, m);
}

void Heavy_TheCloud::cMsg_ijdIHaDX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_nVKIv82n, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_nVKIv82n, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_z9QuCivU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_xJ1XdzEh, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_xJ1XdzEh, 0, m, NULL);
}

void Heavy_TheCloud::cSend_JHzqFp50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_7QIovQxc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ATjCQuHk_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_9R2uSpXB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_xYjDpPzu_sendMessage);
}

void Heavy_TheCloud::cSystem_xYjDpPzu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_GaLYtOFe_sendMessage);
}

void Heavy_TheCloud::cBinop_IC5Lctq0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_llNp3KEG, m);
}

void Heavy_TheCloud::cBinop_GaLYtOFe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_vRjmzzGt, m);
}

void Heavy_TheCloud::cMsg_ATjCQuHk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_vY51dQ4V_sendMessage);
}

void Heavy_TheCloud::cSystem_vY51dQ4V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_IC5Lctq0_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_Or0KXkK7, m);
}

void Heavy_TheCloud::cVar_a6MbZXH0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_QZfOzNnc_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_7RD8UPJ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wyAoFcUE, 1, m, &cIf_wyAoFcUE_sendMessage);
}

void Heavy_TheCloud::cVar_gYi8nZEi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wyAoFcUE, 1, m, &cIf_wyAoFcUE_sendMessage);
}

void Heavy_TheCloud::cVar_tGF3P4c1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_g6y6rfHP_sendMessage);
  cSwitchcase_ljS4TEOT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_g6y6rfHP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_tGF3P4c1, 1, m, &cVar_tGF3P4c1_sendMessage);
}

void Heavy_TheCloud::cCast_cMZTR148_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wyAoFcUE, 0, m, &cIf_wyAoFcUE_sendMessage);
}

void Heavy_TheCloud::cUnop_N2TjcepS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_gyqlqmBM, m);
}

void Heavy_TheCloud::cUnop_2gA7qOFu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZG2TDkkQ, m);
}

void Heavy_TheCloud::cBinop_5DlWEwfA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_2gA7qOFu_sendMessage);
}

void Heavy_TheCloud::cIf_wyAoFcUE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_a6MbZXH0, 0, m, &cVar_a6MbZXH0_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cDelay_MgbUV7Zq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_MgbUV7Zq, m);
  cMsg_GYIHNYaJ_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_0Gjr0w76_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_bCOIm0bA_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_bCOIm0bA_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_MgbUV7Zq, 1, m, &cDelay_MgbUV7Zq_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_SVKUjCNt_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_bCOIm0bA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_MgbUV7Zq, 0, m, &cDelay_MgbUV7Zq_sendMessage);
}

void Heavy_TheCloud::cCast_SVKUjCNt_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_MgbUV7Zq, 0, m, &cDelay_MgbUV7Zq_sendMessage);
}

void Heavy_TheCloud::cCast_dhX5CdtL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_gYi8nZEi, 0, m, &cVar_gYi8nZEi_sendMessage);
}

void Heavy_TheCloud::cCast_5pyYyiXO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_7RD8UPJ7, 0, m, &cVar_7RD8UPJ7_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_ljS4TEOT_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dhX5CdtL_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5pyYyiXO_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_oyVr8wR3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_N2TjcepS_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_5DlWEwfA_sendMessage);
}

void Heavy_TheCloud::cMsg_GYIHNYaJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_tGF3P4c1, 0, m, &cVar_tGF3P4c1_sendMessage);
  cSwitchcase_ljS4TEOT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_gKvZT5YJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_fXsQ9Klq, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_fXsQ9Klq, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_zh1FYJgX_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_AayV8Teb, m);
}

void Heavy_TheCloud::cMsg_8Q0By4la_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_tGF3P4c1, 0, m, &cVar_tGF3P4c1_sendMessage);
  cSwitchcase_ljS4TEOT_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_5VFR28Wd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_3Ws9zF0v, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_ag0DiKxn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_0Gjr0w76_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_Fn1bnGaE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_3Ws9zF0v, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_3Ws9zF0v, 0, m, NULL);
}

void Heavy_TheCloud::cSend_QZfOzNnc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_iDc9z3Li_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_5kxCnje0, 0, m, &cIf_5kxCnje0_sendMessage);
}

void Heavy_TheCloud::cIf_5kxCnje0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_kS4bA5Bc, 0, m, &cVar_kS4bA5Bc_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cDelay_k45MEorF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_k45MEorF, m);
  cMsg_xxKH3i0z_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_i3PtSQxE_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_ppFUUS8E_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_ppFUUS8E_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_k45MEorF, 1, m, &cDelay_k45MEorF_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_KCb4WdaZ_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_ppFUUS8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_k45MEorF, 0, m, &cDelay_k45MEorF_sendMessage);
}

void Heavy_TheCloud::cCast_KCb4WdaZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_k45MEorF, 0, m, &cDelay_k45MEorF_sendMessage);
}

void Heavy_TheCloud::cVar_kS4bA5Bc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_LXCAZMn5_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cUnop_Vo1Kbd4g_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ZZYT4TBo, m);
}

void Heavy_TheCloud::cUnop_3ObFmbo0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_65HklZHC, m);
}

void Heavy_TheCloud::cBinop_5daOHerF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_Vo1Kbd4g_sendMessage);
}

void Heavy_TheCloud::cVar_VFah1wuO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_5kxCnje0, 1, m, &cIf_5kxCnje0_sendMessage);
}

void Heavy_TheCloud::cVar_HboqeV9Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_5kxCnje0, 1, m, &cIf_5kxCnje0_sendMessage);
}

void Heavy_TheCloud::cMsg_1vtSiu8j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_CsohxUqw_sendMessage);
}

void Heavy_TheCloud::cSystem_CsohxUqw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_HtJ3GarC_sendMessage);
}

void Heavy_TheCloud::cVar_T3bU0Ca9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_rcINi2pq_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_pJ4sVEIN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_9zJTmOAt, m);
}

void Heavy_TheCloud::cBinop_HtJ3GarC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_YpZND8K0, m);
}

void Heavy_TheCloud::cMsg_rcINi2pq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_C7h4e2EO_sendMessage);
}

void Heavy_TheCloud::cSystem_C7h4e2EO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_pJ4sVEIN_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_qSNddLjm, m);
}

void Heavy_TheCloud::cVar_mllNUCuT_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_2m7Wcuu0_sendMessage);
  cSwitchcase_cti3XeVv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_2m7Wcuu0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_mllNUCuT, 1, m, &cVar_mllNUCuT_sendMessage);
}

void Heavy_TheCloud::cCast_xWrUQAsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HboqeV9Y, 0, m, &cVar_HboqeV9Y_sendMessage);
}

void Heavy_TheCloud::cCast_hRe5e7hP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_VFah1wuO, 0, m, &cVar_VFah1wuO_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_cti3XeVv_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_xWrUQAsI_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hRe5e7hP_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_S5KoQdp5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_J79giJu1, m);
}

void Heavy_TheCloud::cMsg_24vGOnJy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_cIn2bOMU, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_mxHMVjaM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_i3PtSQxE_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_HjNLuBI8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_cIn2bOMU, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_cIn2bOMU, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_NaGBUK0e_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_mllNUCuT, 0, m, &cVar_mllNUCuT_sendMessage);
  cSwitchcase_cti3XeVv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_OLphG3kr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_2fN2aP8r, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_2fN2aP8r, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_xxKH3i0z_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_mllNUCuT, 0, m, &cVar_mllNUCuT_sendMessage);
  cSwitchcase_cti3XeVv_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_QKQbhtDP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_3ObFmbo0_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_5daOHerF_sendMessage);
}

void Heavy_TheCloud::cSend_LXCAZMn5_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_jPGXQyix_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7Vd4GScm, 1, m, &cIf_7Vd4GScm_sendMessage);
}

void Heavy_TheCloud::cVar_LOtl3lO1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_ybG8eQUQ_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_HHQw6KSo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_OCD90Apa_sendMessage);
  cSwitchcase_FYnkVLrk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_OCD90Apa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_HHQw6KSo, 1, m, &cVar_HHQw6KSo_sendMessage);
}

void Heavy_TheCloud::cMsg_jC2KCfrp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_iip4fpWF_sendMessage);
}

void Heavy_TheCloud::cSystem_iip4fpWF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_lTqs2HRo_sendMessage);
}

void Heavy_TheCloud::cVar_3cVO1MnD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_hXDmdMEN_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_RKXTjnPo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_maOg4g8k, m);
}

void Heavy_TheCloud::cBinop_lTqs2HRo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_7HAkZZln, m);
}

void Heavy_TheCloud::cMsg_hXDmdMEN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_7o0wqU3J_sendMessage);
}

void Heavy_TheCloud::cSystem_7o0wqU3J_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_RKXTjnPo_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_oFtFtzYP, m);
}

void Heavy_TheCloud::cIf_7Vd4GScm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_LOtl3lO1, 0, m, &cVar_LOtl3lO1_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cDelay_QmbE8jH9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_QmbE8jH9, m);
  cMsg_wjupu37V_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_Bf9PxxWj_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_9oipdhjM_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_9oipdhjM_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_QmbE8jH9, 1, m, &cDelay_QmbE8jH9_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_ovCxRq0E_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_9oipdhjM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_QmbE8jH9, 0, m, &cDelay_QmbE8jH9_sendMessage);
}

void Heavy_TheCloud::cCast_ovCxRq0E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_QmbE8jH9, 0, m, &cDelay_QmbE8jH9_sendMessage);
}

void Heavy_TheCloud::cVar_LybZNThj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7Vd4GScm, 1, m, &cIf_7Vd4GScm_sendMessage);
}

void Heavy_TheCloud::cCast_6amVqAl7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7Vd4GScm, 0, m, &cIf_7Vd4GScm_sendMessage);
}

void Heavy_TheCloud::cUnop_1WKDQOpM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_bHz31RG7, m);
}

void Heavy_TheCloud::cUnop_AgGihPsI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nrPAMMtz, m);
}

void Heavy_TheCloud::cBinop_uszJBtRw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_1WKDQOpM_sendMessage);
}

void Heavy_TheCloud::cCast_7Zmdfj0U_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_jPGXQyix, 0, m, &cVar_jPGXQyix_sendMessage);
}

void Heavy_TheCloud::cCast_piQ0IT5o_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_LybZNThj, 0, m, &cVar_LybZNThj_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_FYnkVLrk_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_7Zmdfj0U_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_piQ0IT5o_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_wjupu37V_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_HHQw6KSo, 0, m, &cVar_HHQw6KSo_sendMessage);
  cSwitchcase_FYnkVLrk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_160aor8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_Ar1JfTj5, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_Ar1JfTj5, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_ktkEUnqn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_HHQw6KSo, 0, m, &cVar_HHQw6KSo_sendMessage);
  cSwitchcase_FYnkVLrk_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_6ktdVoN4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_Ar1JfTj5, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_3gAK72Rv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_Bf9PxxWj_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_aQPFcehR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_kUrMx431, m);
}

void Heavy_TheCloud::cMsg_TJs156TB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_AgGihPsI_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_uszJBtRw_sendMessage);
}

void Heavy_TheCloud::cMsg_4djfb1hH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_K1BDjFNr, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_K1BDjFNr, 0, m, NULL);
}

void Heavy_TheCloud::cSend_ybG8eQUQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_rZMCHyvg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_YD01oec7_sendMessage);
  cSwitchcase_Ihjcn7Fh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_YD01oec7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_rZMCHyvg, 1, m, &cVar_rZMCHyvg_sendMessage);
}

void Heavy_TheCloud::cVar_5wK4Qrlj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_3LxBrZk4, 1, m, &cIf_3LxBrZk4_sendMessage);
}

void Heavy_TheCloud::cDelay_McGkxrQk_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_McGkxrQk, m);
  cMsg_JtZIblI2_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_nRgaWGUK_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_jafXQEFR_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_jafXQEFR_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_McGkxrQk, 1, m, &cDelay_McGkxrQk_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_pO79Xg8N_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_jafXQEFR_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_McGkxrQk, 0, m, &cDelay_McGkxrQk_sendMessage);
}

void Heavy_TheCloud::cCast_pO79Xg8N_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_McGkxrQk, 0, m, &cDelay_McGkxrQk_sendMessage);
}

void Heavy_TheCloud::cUnop_BfBYXWcs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_RPgowcxs, m);
}

void Heavy_TheCloud::cUnop_AQPn7Kpu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QFBfjh3J, m);
}

void Heavy_TheCloud::cBinop_wXUaQxMr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_BfBYXWcs_sendMessage);
}

void Heavy_TheCloud::cIf_3LxBrZk4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_22BAfuw1, 0, m, &cVar_22BAfuw1_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_22BAfuw1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_581r3LVh_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_im6dlsB4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_3LxBrZk4, 1, m, &cIf_3LxBrZk4_sendMessage);
}

void Heavy_TheCloud::cMsg_qYUpdugd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_FdenQ8DK_sendMessage);
}

void Heavy_TheCloud::cSystem_FdenQ8DK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_T3oebSKf_sendMessage);
}

void Heavy_TheCloud::cVar_d0hioWgg_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_ZjdZ9R2I_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_Ffi8qyjV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_4zbLoX08, m);
}

void Heavy_TheCloud::cBinop_T3oebSKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_ipo8Kuxd, m);
}

void Heavy_TheCloud::cMsg_ZjdZ9R2I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Fx7ki0d4_sendMessage);
}

void Heavy_TheCloud::cSystem_Fx7ki0d4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_Ffi8qyjV_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_FaSyoXt7, m);
}

void Heavy_TheCloud::cCast_wuLzofOS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_3LxBrZk4, 0, m, &cIf_3LxBrZk4_sendMessage);
}

void Heavy_TheCloud::cCast_IgWeLyds_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_5wK4Qrlj, 0, m, &cVar_5wK4Qrlj_sendMessage);
}

void Heavy_TheCloud::cCast_IMzexx31_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_im6dlsB4, 0, m, &cVar_im6dlsB4_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_Ihjcn7Fh_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IgWeLyds_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_IMzexx31_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_UKWPmaWQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_eKHbf2yJ, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_YZW9Xlpi_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_eKHbf2yJ, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_eKHbf2yJ, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_EVnbUy35_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_QjWP0bUf, m);
}

void Heavy_TheCloud::cMsg_JtZIblI2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_rZMCHyvg, 0, m, &cVar_rZMCHyvg_sendMessage);
  cSwitchcase_Ihjcn7Fh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_SIkw9Aus_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_rZMCHyvg, 0, m, &cVar_rZMCHyvg_sendMessage);
  cSwitchcase_Ihjcn7Fh_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_uZtBHsbZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_c3Emob10, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_c3Emob10, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_Ba6Vu3Pl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_nRgaWGUK_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_3e5S7omD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_AQPn7Kpu_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_wXUaQxMr_sendMessage);
}

void Heavy_TheCloud::cSend_581r3LVh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_QmtaHNQC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_vUcu1mQY_sendMessage);
  cSwitchcase_jJYtwJ9P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_vUcu1mQY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_QmtaHNQC, 1, m, &cVar_QmtaHNQC_sendMessage);
}

void Heavy_TheCloud::cUnop_3LOeQ9nM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_lI8thHgB, m);
}

void Heavy_TheCloud::cUnop_NRf2uHao_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_3F3mnKEo, m);
}

void Heavy_TheCloud::cBinop_qJdSWWQB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_3LOeQ9nM_sendMessage);
}

void Heavy_TheCloud::cMsg_IRQW8Iv8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_Capizxcs_sendMessage);
}

void Heavy_TheCloud::cSystem_Capizxcs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_ztYmqdFC_sendMessage);
}

void Heavy_TheCloud::cVar_E1IPm21Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_tBP7qIY1_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_r4MNL5nv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Xy1hjWbm, m);
}

void Heavy_TheCloud::cBinop_ztYmqdFC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_hXOVRGBn, m);
}

void Heavy_TheCloud::cMsg_tBP7qIY1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_z9sGk7my_sendMessage);
}

void Heavy_TheCloud::cSystem_z9sGk7my_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_r4MNL5nv_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_2yhGBBPZ, m);
}

void Heavy_TheCloud::cCast_0qUAYOEd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SfzY5M50, 0, m, &cIf_SfzY5M50_sendMessage);
}

void Heavy_TheCloud::cIf_SfzY5M50_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_IJBHCE6A, 0, m, &cVar_IJBHCE6A_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cVar_co7qlqs2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SfzY5M50, 1, m, &cIf_SfzY5M50_sendMessage);
}

void Heavy_TheCloud::cVar_Q5DLvgVe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SfzY5M50, 1, m, &cIf_SfzY5M50_sendMessage);
}

void Heavy_TheCloud::cVar_IJBHCE6A_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_93adatTD_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cDelay_ppbRBYMO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_ppbRBYMO, m);
  cMsg_ezf4P9UA_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_24m4Xg2Z_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_ZQTDhv4n_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_ZQTDhv4n_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_ppbRBYMO, 1, m, &cDelay_ppbRBYMO_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_vFtPcPuw_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_ZQTDhv4n_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_ppbRBYMO, 0, m, &cDelay_ppbRBYMO_sendMessage);
}

void Heavy_TheCloud::cCast_vFtPcPuw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_ppbRBYMO, 0, m, &cDelay_ppbRBYMO_sendMessage);
}

void Heavy_TheCloud::cCast_EqVUVXss_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_co7qlqs2, 0, m, &cVar_co7qlqs2_sendMessage);
}

void Heavy_TheCloud::cCast_Sk6ytfW4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_Q5DLvgVe, 0, m, &cVar_Q5DLvgVe_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_jJYtwJ9P_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_EqVUVXss_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Sk6ytfW4_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_ezf4P9UA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_QmtaHNQC, 0, m, &cVar_QmtaHNQC_sendMessage);
  cSwitchcase_jJYtwJ9P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_WpLAvpAv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_NRf2uHao_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_qJdSWWQB_sendMessage);
}

void Heavy_TheCloud::cMsg_vS5jDDfF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_b3qKkgrm, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_zBsehQrA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_Xlb9seAn, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_Xlb9seAn, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_PQXa5gZ7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_QmtaHNQC, 0, m, &cVar_QmtaHNQC_sendMessage);
  cSwitchcase_jJYtwJ9P_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_5A1X1tJN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_24m4Xg2Z_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_whecChQm_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_xLwYFOQX, m);
}

void Heavy_TheCloud::cMsg_JO2ESbfu_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_b3qKkgrm, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_b3qKkgrm, 0, m, NULL);
}

void Heavy_TheCloud::cSend_93adatTD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_Cn6BHQWw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_c7ma8SzO_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_bnBURjjF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GVqZasz6, 1, m, &cIf_GVqZasz6_sendMessage);
}

void Heavy_TheCloud::cUnop_UkDRNURl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_QGIDpVop, m);
}

void Heavy_TheCloud::cUnop_trjMPdsw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_8dBEQJ7N, m);
}

void Heavy_TheCloud::cBinop_xijhejp1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_UkDRNURl_sendMessage);
}

void Heavy_TheCloud::cMsg_WyaxIpTo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_mfSlvPXo_sendMessage);
}

void Heavy_TheCloud::cSystem_mfSlvPXo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_Gdy8Jst1_sendMessage);
}

void Heavy_TheCloud::cVar_PApZxX0a_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_jnm3kb7O_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_h1ZHFYVN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_GfJ7d4t3, m);
}

void Heavy_TheCloud::cBinop_Gdy8Jst1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_XGUOlvoi, m);
}

void Heavy_TheCloud::cMsg_jnm3kb7O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_p0HwEvfQ_sendMessage);
}

void Heavy_TheCloud::cSystem_p0HwEvfQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_h1ZHFYVN_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_mTRfQwOW, m);
}

void Heavy_TheCloud::cVar_N1GvZLPh_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_EQ, 0.0f, 0, m, &cBinop_KvJkamEl_sendMessage);
  cSwitchcase_uQ6O2Itt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cBinop_KvJkamEl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_N1GvZLPh, 1, m, &cVar_N1GvZLPh_sendMessage);
}

void Heavy_TheCloud::cIf_GVqZasz6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      break;
    }
    case 1: {
      cVar_onMessage(_c, &Context(_c)->cVar_Cn6BHQWw, 0, m, &cVar_Cn6BHQWw_sendMessage);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cCast_JW9zU15L_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GVqZasz6, 0, m, &cIf_GVqZasz6_sendMessage);
}

void Heavy_TheCloud::cDelay_Sh5K3LWI_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_Sh5K3LWI, m);
  cMsg_YewWL8SB_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_k8Ha8UZD_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7A5B032D: { // "stop"
      cMsg_cw1sLTuV_sendMessage(_c, 0, m);
      break;
    }
    default: {
      cMsg_cw1sLTuV_sendMessage(_c, 0, m);
      cDelay_onMessage(_c, &Context(_c)->cDelay_Sh5K3LWI, 1, m, &cDelay_Sh5K3LWI_sendMessage);
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_5FRYUsoH_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_cw1sLTuV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "clear");
  cDelay_onMessage(_c, &Context(_c)->cDelay_Sh5K3LWI, 0, m, &cDelay_Sh5K3LWI_sendMessage);
}

void Heavy_TheCloud::cCast_5FRYUsoH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_Sh5K3LWI, 0, m, &cDelay_Sh5K3LWI_sendMessage);
}

void Heavy_TheCloud::cVar_psG4BG3X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GVqZasz6, 1, m, &cIf_GVqZasz6_sendMessage);
}

void Heavy_TheCloud::cCast_flhVlE3D_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_bnBURjjF, 0, m, &cVar_bnBURjjF_sendMessage);
}

void Heavy_TheCloud::cCast_liYvOb92_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_psG4BG3X, 0, m, &cVar_psG4BG3X_sendMessage);
}

void Heavy_TheCloud::cSwitchcase_uQ6O2Itt_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x0: { // "0.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_flhVlE3D_sendMessage);
      break;
    }
    case 0x3F800000: { // "1.0"
      cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_liYvOb92_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cMsg_eQL6SLDW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 3);
  sVarf_onMessage(_c, &Context(_c)->sVarf_kRxJXBSE, m);
}

void Heavy_TheCloud::cMsg_eEVZFjDY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 4);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_trjMPdsw_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_xijhejp1_sendMessage);
}

void Heavy_TheCloud::cMsg_PJrtBFg7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 1.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_N1GvZLPh, 0, m, &cVar_N1GvZLPh_sendMessage);
  cSwitchcase_uQ6O2Itt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_YewWL8SB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.0f);
  cVar_onMessage(_c, &Context(_c)->cVar_N1GvZLPh, 0, m, &cVar_N1GvZLPh_sendMessage);
  cSwitchcase_uQ6O2Itt_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_XrpkHFgO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_XGWlWz6x, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setFloat(m, 0, 0.25f);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_XGWlWz6x, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_zUeqjyyv_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0, -0.25f);
  sLine_onMessage(_c, &Context(_c)->sLine_XGWlWz6x, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_ibvtl1MG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 2);
  cSwitchcase_k8Ha8UZD_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cMsg_U81pVoV6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 0);
  sLine_onMessage(_c, &Context(_c)->sLine_1vnXhyvH, 0, m, NULL);
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setElementToFrom(m, 0, n, 1);
  msg_setElementToFrom(m, 1, n, 2);
  sLine_onMessage(_c, &Context(_c)->sLine_1vnXhyvH, 0, m, NULL);
}

void Heavy_TheCloud::cSend_c7ma8SzO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_s48kNVC6_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_GwkewOi7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_SqmwAQP4_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cVar_XTj3sXvY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_BUDWkfoY_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_a12O0Kve_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_NM5SdAP8, 0, m, &cSlice_NM5SdAP8_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_W5CmFTE6, 0, m, &cRandom_W5CmFTE6_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_VFdajsCn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_eM5W16Md_sendMessage);
}

void Heavy_TheCloud::cUnop_eM5W16Md_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 100.0f, 0, m, &cBinop_8hgawvbD_sendMessage);
}

void Heavy_TheCloud::cRandom_W5CmFTE6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 100.0f, 0, m, &cBinop_VFdajsCn_sendMessage);
}

void Heavy_TheCloud::cSlice_NM5SdAP8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_W5CmFTE6, 1, m, &cRandom_W5CmFTE6_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cBinop_8hgawvbD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P0iYMZIU, 4, m, &cPack_P0iYMZIU_sendMessage);
}

void Heavy_TheCloud::cVar_ZbrH5rrw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_XPLVTnSS_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_nhw7ia0S_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_kaFqZfuN_sendMessage);
}

void Heavy_TheCloud::cSystem_kaFqZfuN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_uWQ1SAYG_sendMessage);
}

void Heavy_TheCloud::cVar_79NmzfRB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_0SSqVJmn_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_mjqDs4l2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_6r9gZyd1, m);
}

void Heavy_TheCloud::cBinop_uWQ1SAYG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_STfqpFA8, m);
}

void Heavy_TheCloud::cMsg_0SSqVJmn_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(3);
  msg_init(m, 3, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "table");
  msg_setElementToFrom(m, 1, n, 0);
  msg_setSymbol(m, 2, "size");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_yQJKDni1_sendMessage);
}

void Heavy_TheCloud::cSystem_yQJKDni1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.0f, 0, m, &cBinop_mjqDs4l2_sendMessage);
  sVarf_onMessage(_c, &Context(_c)->sVarf_N2T3tXUe, m);
}

void Heavy_TheCloud::cDelay_vordwAo1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_vordwAo1, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_yajvHOnE, 0, m, &cDelay_yajvHOnE_sendMessage);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vordwAo1, 0, m, &cDelay_vordwAo1_sendMessage);
  sTabwrite_onMessage(_c, &Context(_c)->sTabwrite_hyR10Y1r, 1, m, NULL);
}

void Heavy_TheCloud::cDelay_yajvHOnE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const m) {
  cDelay_clearExecutingMessage(&Context(_c)->cDelay_yajvHOnE, m);
  cMsg_KdERaLwe_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cMsg_vsQV7nF7_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "samplerate");
  cSystem_onMessage(_c, NULL, 0, m, &cSystem_ZdPmaJe8_sendMessage);
}

void Heavy_TheCloud::cSystem_ZdPmaJe8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_DIVIDE, 1000.0f, 0, m, &cBinop_qF28VFTL_sendMessage);
}

void Heavy_TheCloud::cBinop_92ZefviP_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_l2xulD1r_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cBinop_qF28VFTL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 2000.0f, 0, m, &cBinop_92ZefviP_sendMessage);
}

void Heavy_TheCloud::cMsg_l2xulD1r_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(2);
  msg_init(m, 2, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "resize");
  msg_setElementToFrom(m, 1, n, 0);
  hTable_onMessage(_c, &Context(_c)->hTable_sC4of0vj, 0, m, &hTable_sC4of0vj_sendMessage);
}

void Heavy_TheCloud::cMsg_KdERaLwe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setSymbol(m, 0, "mirror");
  hTable_onMessage(_c, &Context(_c)->hTable_sC4of0vj, 0, m, &hTable_sC4of0vj_sendMessage);
}

void Heavy_TheCloud::cMsg_zKBtvML1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *const n) {
  HvMessage *m = nullptr;
  m = HV_MESSAGE_ON_STACK(1);
  msg_init(m, 1, msg_getTimestamp(n));
  msg_setFloat(m, 0,  static_cast<float>(HV_N_SIMD));
  cDelay_onMessage(_c, &Context(_c)->cDelay_yajvHOnE, 2, m, &cDelay_yajvHOnE_sendMessage);
}

void Heavy_TheCloud::hTable_sC4of0vj_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zKBtvML1_sendMessage(_c, 0, m);
  cDelay_onMessage(_c, &Context(_c)->cDelay_vordwAo1, 2, m, &cDelay_vordwAo1_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_aVLDZAka_sendMessage);
}

void Heavy_TheCloud::cCast_aVLDZAka_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cDelay_onMessage(_c, &Context(_c)->cDelay_vordwAo1, 0, m, &cDelay_vordwAo1_sendMessage);
}

void Heavy_TheCloud::cVar_22uAqjd2_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSend_v2w39An1_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSwitchcase_h6R5iJEV_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ZblYuNqY, 0, m, &cSlice_ZblYuNqY_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_kcWSTaDG, 0, m, &cRandom_kcWSTaDG_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_5Q4qf7XC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_ZpwD8sTF_sendMessage);
}

void Heavy_TheCloud::cUnop_ZpwD8sTF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fw0etIPZ, HV_BINOP_SUBTRACT, 0, m, &cBinop_Fw0etIPZ_sendMessage);
}

void Heavy_TheCloud::cRandom_kcWSTaDG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_5Q4qf7XC, HV_BINOP_MULTIPLY, 0, m, &cBinop_5Q4qf7XC_sendMessage);
}

void Heavy_TheCloud::cSlice_ZblYuNqY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_kcWSTaDG, 1, m, &cRandom_kcWSTaDG_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSwitchcase_0dBVc0MC_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x7E64BD01: { // "seed"
      cSlice_onMessage(_c, &Context(_c)->cSlice_bBkz8oCo, 0, m, &cSlice_bBkz8oCo_sendMessage);
      break;
    }
    default: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_qGS8CN6I, 0, m, &cRandom_qGS8CN6I_sendMessage);
      break;
    }
  }
}

void Heavy_TheCloud::cBinop_TF0lCoKf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_FLOOR, m, &cUnop_dE9PrUtJ_sendMessage);
}

void Heavy_TheCloud::cUnop_dE9PrUtJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_Fw0etIPZ, HV_BINOP_SUBTRACT, 1, m, &cBinop_Fw0etIPZ_sendMessage);
}

void Heavy_TheCloud::cRandom_qGS8CN6I_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TF0lCoKf, HV_BINOP_MULTIPLY, 0, m, &cBinop_TF0lCoKf_sendMessage);
}

void Heavy_TheCloud::cSlice_bBkz8oCo_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cRandom_onMessage(_c, &Context(_c)->cRandom_qGS8CN6I, 1, m, &cRandom_qGS8CN6I_sendMessage);
      break;
    }
    case 1: {
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cBinop_Fw0etIPZ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_0P6J2Enj, HV_BINOP_ADD, 1, m, &cBinop_0P6J2Enj_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_yMa1je4h, HV_BINOP_ADD, 1, m, &cBinop_yMa1je4h_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_sGP24lOI_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_SOid6QWE_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_Uk6uR1YJ_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_iWkKfFdw_sendMessage);
}

void Heavy_TheCloud::cCast_hm3rLvCF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_h6R5iJEV_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cCast_dCpcq0of_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_0dBVc0MC_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cUnop_RW3VYFou_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_nt1zDSpx, m);
}

void Heavy_TheCloud::cUnop_lv7UodeY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sVarf_onMessage(_c, &Context(_c)->sVarf_Gc1cNjPv, m);
}

void Heavy_TheCloud::cBinop_qHGrt3MM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_SUBTRACT, 1.57f, 0, m, &cBinop_m79gmhyl_sendMessage);
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_RW3VYFou_sendMessage);
}

void Heavy_TheCloud::cBinop_m79gmhyl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cUnop_onMessage(_c, HV_UNOP_COS, m, &cUnop_lv7UodeY_sendMessage);
}

void Heavy_TheCloud::cPack_P0iYMZIU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_XhTmrioA_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cPack_Ly0M8SId_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  sLine_onMessage(_c, &Context(_c)->sLine_U2iaix7D, 0, m, NULL);
}

void Heavy_TheCloud::cSwitchcase_XhTmrioA_onMessage(HeavyContextInterface *_c, void *o, int letIn, const HvMessage *const m, void *sendMessage) {
  switch (msg_getHash(m, 0)) {
    case 0x3F800000: { // "1.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ccELYZgN, 0, m, &cSlice_ccELYZgN_sendMessage);
      break;
    }
    case 0x40000000: { // "2.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_GdtELfcK, 0, m, &cSlice_GdtELfcK_sendMessage);
      break;
    }
    case 0x40400000: { // "3.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_D2gnUpR8, 0, m, &cSlice_D2gnUpR8_sendMessage);
      break;
    }
    case 0x40800000: { // "4.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_w7wqq72s, 0, m, &cSlice_w7wqq72s_sendMessage);
      break;
    }
    case 0x40A00000: { // "5.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_E4WgM4zs, 0, m, &cSlice_E4WgM4zs_sendMessage);
      break;
    }
    case 0x40C00000: { // "6.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_RepJMGbV, 0, m, &cSlice_RepJMGbV_sendMessage);
      break;
    }
    case 0x40E00000: { // "7.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_6rBzFaPU, 0, m, &cSlice_6rBzFaPU_sendMessage);
      break;
    }
    case 0x41000000: { // "8.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_tXdTBzIH, 0, m, &cSlice_tXdTBzIH_sendMessage);
      break;
    }
    case 0x41100000: { // "9.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_5wLcqxjA, 0, m, &cSlice_5wLcqxjA_sendMessage);
      break;
    }
    case 0x41200000: { // "10.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_poKK07Gc, 0, m, &cSlice_poKK07Gc_sendMessage);
      break;
    }
    case 0x41300000: { // "11.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_FN5dJ7vC, 0, m, &cSlice_FN5dJ7vC_sendMessage);
      break;
    }
    case 0x41400000: { // "12.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_htyxjUQH, 0, m, &cSlice_htyxjUQH_sendMessage);
      break;
    }
    case 0x41500000: { // "13.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_8rxgNe8E, 0, m, &cSlice_8rxgNe8E_sendMessage);
      break;
    }
    case 0x41600000: { // "14.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_ypyV8qgC, 0, m, &cSlice_ypyV8qgC_sendMessage);
      break;
    }
    case 0x41700000: { // "15.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_1lOdwQGe, 0, m, &cSlice_1lOdwQGe_sendMessage);
      break;
    }
    case 0x41800000: { // "16.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_qBpAnH42, 0, m, &cSlice_qBpAnH42_sendMessage);
      break;
    }
    case 0x41880000: { // "17.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_fHtfuzI1, 0, m, &cSlice_fHtfuzI1_sendMessage);
      break;
    }
    case 0x41900000: { // "18.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_KPUrq6uq, 0, m, &cSlice_KPUrq6uq_sendMessage);
      break;
    }
    case 0x41980000: { // "19.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_nRwBFBso, 0, m, &cSlice_nRwBFBso_sendMessage);
      break;
    }
    case 0x41A00000: { // "20.0"
      cSlice_onMessage(_c, &Context(_c)->cSlice_pluEtoM6, 0, m, &cSlice_pluEtoM6_sendMessage);
      break;
    }
    default: {
      break;
    }
  }
}

void Heavy_TheCloud::cSlice_ccELYZgN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_66jmg8hw_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_66jmg8hw_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_GdtELfcK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5vSj0x0u_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_5vSj0x0u_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_FN5dJ7vC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_u614ux5q_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_u614ux5q_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_htyxjUQH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_QOgeNTjc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_QOgeNTjc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_8rxgNe8E_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_IMHqYq1X_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_IMHqYq1X_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_ypyV8qgC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_ozyA7Vjc_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_ozyA7Vjc_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_1lOdwQGe_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_CUu6dpUC_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_CUu6dpUC_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_qBpAnH42_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_m3nAH9Lb_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_m3nAH9Lb_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_fHtfuzI1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_DH9YVB1O_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_DH9YVB1O_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_KPUrq6uq_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fO6hZc4i_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_fO6hZc4i_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_nRwBFBso_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_fX504FyA_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_fX504FyA_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_pluEtoM6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_EGa2nr8j_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_EGa2nr8j_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_D2gnUpR8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_kc0uKNNp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_kc0uKNNp_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_w7wqq72s_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_zXkLukkM_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_zXkLukkM_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_E4WgM4zs_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_5CO6an0h_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_5CO6an0h_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_RepJMGbV_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_pyP86qUy_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_pyP86qUy_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_6rBzFaPU_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_M7vE8zCa_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_M7vE8zCa_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_tXdTBzIH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_J3wcZNCQ_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_J3wcZNCQ_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_5wLcqxjA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_KKC4EDBY_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_KKC4EDBY_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSlice_poKK07Gc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  switch (letIn) {
    case 0: {
      cSend_6VlHDQGp_sendMessage(_c, 0, m);
      break;
    }
    case 1: {
      cSend_6VlHDQGp_sendMessage(_c, 0, m);
      break;
    }
    default: return;
  }
}

void Heavy_TheCloud::cSend_SqmwAQP4_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gS94yw7j_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_5vSj0x0u_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_DPH6u8Ku_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_QOgeNTjc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6Qu1YatM_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_EGa2nr8j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_A647drtG_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_ozyA7Vjc_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_FNO1w5WC_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_6VlHDQGp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_cs6RDYg3_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_zXkLukkM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_NQTx2OK0_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_KKC4EDBY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_w1j8rK21_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_M7vE8zCa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hNjSNTLz_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_JhH7t9ui_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_hWP3K9JW_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_m3nAH9Lb_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_OOuWZDWM_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_XPLVTnSS_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_dAkTkM3Y_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_DH9YVB1O_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_qN6a2sdO_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_fX504FyA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_1mjojgLD_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_CUu6dpUC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_9tUhinXK_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_BUDWkfoY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_XUBqGUVN_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_IMHqYq1X_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_z8OCggQB_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_v2w39An1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6RvBSMdY_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_pyP86qUy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_Pl9tsId9_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_5CO6an0h_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_R0yTIvBK_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_u614ux5q_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_HDuqmymy_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_kc0uKNNp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_6WG7OBHE_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_YjytvlJf_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_KtoSKeW3_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_J3wcZNCQ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_TxpRhYxL_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_fO6hZc4i_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_lAQ0vDcK_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_66jmg8hw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_gvIXIMI9_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cSend_MWreXMIK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cReceive_19tJtUEr_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cCast_RVfdYXLF_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_c2EYkx2o_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cCast_VX0sUnqL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_dCpcq0of_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_hm3rLvCF_sendMessage);
}

void Heavy_TheCloud::cCast_p4gfD2FW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_P0iYMZIU, 0, m, &cPack_P0iYMZIU_sendMessage);
}

void Heavy_TheCloud::cCast_nBuHZLvM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_o4oQRsuB_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_DZQWTrxr_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_Cre2f1ck_sendMessage);
}

void Heavy_TheCloud::cCast_TAeWQsAN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_gXFLZNhL_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cCast_fINByH8v_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cSwitchcase_a12O0Kve_onMessage(_c, NULL, 0, m, NULL);
}

void Heavy_TheCloud::cReceive_ePgHU9AN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vsQV7nF7_sendMessage(_c, 0, m);
  cMsg_qJ49dqg6_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_ISgShoAv, 0, m, &cVar_ISgShoAv_sendMessage);
  cMsg_vS5jDDfF_sendMessage(_c, 0, m);
  cMsg_zUeqjyyv_sendMessage(_c, 0, m);
  cMsg_RbKPOhmv_sendMessage(_c, 0, m);
  cMsg_5C0DAkOC_sendMessage(_c, 0, m);
  cMsg_MH2ofbOK_sendMessage(_c, 0, m);
  cMsg_YTZG2t6I_sendMessage(_c, 0, m);
  cMsg_UKWPmaWQ_sendMessage(_c, 0, m);
  cMsg_6ktdVoN4_sendMessage(_c, 0, m);
  cMsg_5VFR28Wd_sendMessage(_c, 0, m);
  cMsg_OjdzkQoR_sendMessage(_c, 0, m);
  cMsg_tABFTrp4_sendMessage(_c, 0, m);
  cMsg_QZjrWLUV_sendMessage(_c, 0, m);
  cMsg_wWjmK82S_sendMessage(_c, 0, m);
  cMsg_yta9FMiy_sendMessage(_c, 0, m);
  cMsg_F0cVGa1A_sendMessage(_c, 0, m);
  cMsg_AcYqxuHO_sendMessage(_c, 0, m);
  cMsg_dRLRHSRY_sendMessage(_c, 0, m);
  cMsg_bXbO3htw_sendMessage(_c, 0, m);
  cMsg_BCjWZcmP_sendMessage(_c, 0, m);
  cMsg_24vGOnJy_sendMessage(_c, 0, m);
  cSwitchcase_8xOnQvLE_onMessage(_c, NULL, 0, m, NULL);
  cMsg_kH1NIzRH_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_FJBo5813, 0, m, &cVar_FJBo5813_sendMessage);
  cVar_onMessage(_c, &Context(_c)->cVar_vbAbvgVX, 0, m, &cVar_vbAbvgVX_sendMessage);
  cMsg_jZgqEGzR_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3INM2mrt, 0, m, &cVar_3INM2mrt_sendMessage);
  cMsg_R5vxIObt_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_yXniSoQ9, 0, m, &cVar_yXniSoQ9_sendMessage);
  cMsg_MPU22GHg_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_lhmvVvAF, 0, m, &cVar_lhmvVvAF_sendMessage);
  cMsg_d5htnCFi_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_SdoMPjsj, 0, m, &cVar_SdoMPjsj_sendMessage);
  cMsg_oExT3AAb_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_b2sKIeIR, 0, m, &cVar_b2sKIeIR_sendMessage);
  cMsg_vwN2ZKvr_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_XX86nKmQ, 0, m, &cVar_XX86nKmQ_sendMessage);
  cMsg_u0IArHRD_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_fIVclv01, 0, m, &cVar_fIVclv01_sendMessage);
  cMsg_ABD2DF6x_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_0aoq6EYO, 0, m, &cVar_0aoq6EYO_sendMessage);
  cMsg_OKGJqhyD_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_kbcU9sEB, 0, m, &cVar_kbcU9sEB_sendMessage);
  cMsg_KhAEHc0N_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_EZX7IUdK, 0, m, &cVar_EZX7IUdK_sendMessage);
  cMsg_Uz1SwQ0g_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_5U2jelMH, 0, m, &cVar_5U2jelMH_sendMessage);
  cMsg_nvhf8D83_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_UAzJoYet, 0, m, &cVar_UAzJoYet_sendMessage);
  cMsg_5uVfuawK_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_Zc4elA6z, 0, m, &cVar_Zc4elA6z_sendMessage);
  cMsg_7YXZoGgu_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_7QIovQxc, 0, m, &cVar_7QIovQxc_sendMessage);
  cMsg_9R2uSpXB_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_T3bU0Ca9, 0, m, &cVar_T3bU0Ca9_sendMessage);
  cMsg_1vtSiu8j_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_3cVO1MnD, 0, m, &cVar_3cVO1MnD_sendMessage);
  cMsg_jC2KCfrp_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_d0hioWgg, 0, m, &cVar_d0hioWgg_sendMessage);
  cMsg_qYUpdugd_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_E1IPm21Y, 0, m, &cVar_E1IPm21Y_sendMessage);
  cMsg_IRQW8Iv8_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_PApZxX0a, 0, m, &cVar_PApZxX0a_sendMessage);
  cMsg_WyaxIpTo_sendMessage(_c, 0, m);
  cVar_onMessage(_c, &Context(_c)->cVar_79NmzfRB, 0, m, &cVar_79NmzfRB_sendMessage);
  cMsg_nhw7ia0S_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_s48kNVC6_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_TAeWQsAN_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_fINByH8v_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_RVfdYXLF_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_VX0sUnqL_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_nBuHZLvM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_p4gfD2FW_sendMessage);
  cMsg_HKT980bW_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_YtpTX4jd_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_G84QFxnm, 0, m, &cIf_G84QFxnm_sendMessage);
}

void Heavy_TheCloud::cReceive_PhWHTwcH_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_qwvwFtvA, 0, m, &cIf_qwvwFtvA_sendMessage);
}

void Heavy_TheCloud::cReceive_PgPfIAYW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_soQ20aoX, 0, m, &cIf_soQ20aoX_sendMessage);
}

void Heavy_TheCloud::cReceive_I61zm6Vl_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_3LxBrZk4, 0, m, &cIf_3LxBrZk4_sendMessage);
}

void Heavy_TheCloud::cReceive_9bX8v3hC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mbURUggn, 0, m, &cIf_mbURUggn_sendMessage);
}

void Heavy_TheCloud::cReceive_A7Ilqfg1_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_ImtSPxH4, 0, m, &cIf_ImtSPxH4_sendMessage);
}

void Heavy_TheCloud::cReceive_nq9t2eWa_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SfzY5M50, 0, m, &cIf_SfzY5M50_sendMessage);
}

void Heavy_TheCloud::cReceive_IKz2Y96B_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_yIoo5RFj, 0, m, &cIf_yIoo5RFj_sendMessage);
}

void Heavy_TheCloud::cReceive_YmbWJEWA_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GVqZasz6, 0, m, &cIf_GVqZasz6_sendMessage);
}

void Heavy_TheCloud::cReceive_0IGqqLwp_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6pOlrK3A, 0, m, &cIf_6pOlrK3A_sendMessage);
}

void Heavy_TheCloud::cReceive_LWgoqep8_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_SSHlOcVO, 0, m, &cIf_SSHlOcVO_sendMessage);
}

void Heavy_TheCloud::cReceive_s9JONWS3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_6MCx31H4, 0, m, &cIf_6MCx31H4_sendMessage);
}

void Heavy_TheCloud::cReceive_SwxZDpSJ_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_5kxCnje0, 0, m, &cIf_5kxCnje0_sendMessage);
}

void Heavy_TheCloud::cReceive_8gO6GBUw_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_nue8rMaJ, 0, m, &cIf_nue8rMaJ_sendMessage);
}

void Heavy_TheCloud::cReceive_1bb2TEll_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_lZGCKGwc, 0, m, &cIf_lZGCKGwc_sendMessage);
}

void Heavy_TheCloud::cReceive_KGYrK7km_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_wyAoFcUE, 0, m, &cIf_wyAoFcUE_sendMessage);
}

void Heavy_TheCloud::cReceive_h7O3oQ89_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_IR6XjkT8, 0, m, &cIf_IR6XjkT8_sendMessage);
}

void Heavy_TheCloud::cReceive_VNmajYB3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_mhFeHSno, 0, m, &cIf_mhFeHSno_sendMessage);
}

void Heavy_TheCloud::cReceive_bDNqkxsB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_GDJO8AlL, 0, m, &cIf_GDJO8AlL_sendMessage);
}

void Heavy_TheCloud::cReceive_1L4do0pD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cIf_onMessage(_c, &Context(_c)->cIf_7Vd4GScm, 0, m, &cIf_7Vd4GScm_sendMessage);
}

void Heavy_TheCloud::cReceive_R0yTIvBK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_LHiFUfT2_sendMessage(_c, 0, m);
  cMsg_amQQjlma_sendMessage(_c, 0, m);
  cMsg_JeLi2mK3_sendMessage(_c, 0, m);
  cMsg_STPkXisG_sendMessage(_c, 0, m);
  cMsg_TxCrGeni_sendMessage(_c, 0, m);
  cMsg_Ouc2sNOI_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_OOuWZDWM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FRGOs4jm_sendMessage(_c, 0, m);
  cMsg_EtLzSlO0_sendMessage(_c, 0, m);
  cMsg_C8jlZnIY_sendMessage(_c, 0, m);
  cMsg_dgXR9kF7_sendMessage(_c, 0, m);
  cMsg_c6wwgIOw_sendMessage(_c, 0, m);
  cMsg_lzscffwo_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_6WG7OBHE_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_Rlm3S3AE_sendMessage(_c, 0, m);
  cMsg_53j0beas_sendMessage(_c, 0, m);
  cMsg_JvjGCqOJ_sendMessage(_c, 0, m);
  cMsg_gLbfuWFv_sendMessage(_c, 0, m);
  cMsg_O4Fysnec_sendMessage(_c, 0, m);
  cMsg_O7HLByhM_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_1mjojgLD_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_DMdCWf34_sendMessage(_c, 0, m);
  cMsg_arsTJ4u6_sendMessage(_c, 0, m);
  cMsg_BMMT47Ef_sendMessage(_c, 0, m);
  cMsg_SmwrDIBw_sendMessage(_c, 0, m);
  cMsg_5VdzYndo_sendMessage(_c, 0, m);
  cMsg_mnbni557_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_cs6RDYg3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_FZemW8tX_sendMessage(_c, 0, m);
  cMsg_tGLWNlHj_sendMessage(_c, 0, m);
  cMsg_lTfrlta2_sendMessage(_c, 0, m);
  cMsg_p9lEIp3r_sendMessage(_c, 0, m);
  cMsg_jKrmEowJ_sendMessage(_c, 0, m);
  cMsg_Okwgt2h7_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_qN6a2sdO_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_cSfJFwmj_sendMessage(_c, 0, m);
  cMsg_3HANGC4P_sendMessage(_c, 0, m);
  cMsg_pZRRZ0Tn_sendMessage(_c, 0, m);
  cMsg_bV2zOSUq_sendMessage(_c, 0, m);
  cMsg_jnheMRC5_sendMessage(_c, 0, m);
  cMsg_uhXqdPXM_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_6Qu1YatM_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_vjElU3SN_sendMessage(_c, 0, m);
  cMsg_OaRXqNNW_sendMessage(_c, 0, m);
  cMsg_cJg3Sp7I_sendMessage(_c, 0, m);
  cMsg_mdTABBTS_sendMessage(_c, 0, m);
  cMsg_HUxfknZz_sendMessage(_c, 0, m);
  cMsg_pRYcCu5Y_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_z8OCggQB_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_YTDzN8WW_sendMessage(_c, 0, m);
  cMsg_h3U7bi4K_sendMessage(_c, 0, m);
  cMsg_TjbZYi5M_sendMessage(_c, 0, m);
  cMsg_Pjnl06CX_sendMessage(_c, 0, m);
  cMsg_o2KmZxrN_sendMessage(_c, 0, m);
  cMsg_80Zm69XD_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_Pl9tsId9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_f1DAhJ1X_sendMessage(_c, 0, m);
  cMsg_TG0N13op_sendMessage(_c, 0, m);
  cMsg_Zlrn8Iwg_sendMessage(_c, 0, m);
  cMsg_PLLv6aYN_sendMessage(_c, 0, m);
  cMsg_8z6fbwbJ_sendMessage(_c, 0, m);
  cMsg_lFup5S87_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_NQTx2OK0_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_xezFP850_sendMessage(_c, 0, m);
  cMsg_EbtomydH_sendMessage(_c, 0, m);
  cMsg_UoOj9w5l_sendMessage(_c, 0, m);
  cMsg_lL971air_sendMessage(_c, 0, m);
  cMsg_H5ODsKn4_sendMessage(_c, 0, m);
  cMsg_yMLBJvvS_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_FNO1w5WC_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_NuAnOCIj_sendMessage(_c, 0, m);
  cMsg_B0neuq6L_sendMessage(_c, 0, m);
  cMsg_ppE9pjtH_sendMessage(_c, 0, m);
  cMsg_nVXwZvzt_sendMessage(_c, 0, m);
  cMsg_ilPtPG5a_sendMessage(_c, 0, m);
  cMsg_EyGLPa8p_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_lAQ0vDcK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_dEISZtG0_sendMessage(_c, 0, m);
  cMsg_cOzAzzL4_sendMessage(_c, 0, m);
  cMsg_XWnOEJZq_sendMessage(_c, 0, m);
  cMsg_cZL0SSEw_sendMessage(_c, 0, m);
  cMsg_WN1mBn4U_sendMessage(_c, 0, m);
  cMsg_NGlKaOco_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_9tUhinXK_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_X2Hnjexd_sendMessage(_c, 0, m);
  cMsg_GlWKFSQW_sendMessage(_c, 0, m);
  cMsg_EalFpGEG_sendMessage(_c, 0, m);
  cMsg_NAMKyMn6_sendMessage(_c, 0, m);
  cMsg_Irfoh702_sendMessage(_c, 0, m);
  cMsg_1KmtEb3Q_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_HDuqmymy_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_z9QuCivU_sendMessage(_c, 0, m);
  cMsg_ijdIHaDX_sendMessage(_c, 0, m);
  cMsg_E3ut12xY_sendMessage(_c, 0, m);
  cMsg_U3zDkXht_sendMessage(_c, 0, m);
  cMsg_HWymEj74_sendMessage(_c, 0, m);
  cMsg_6HhR601U_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_w1j8rK21_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_gKvZT5YJ_sendMessage(_c, 0, m);
  cMsg_Fn1bnGaE_sendMessage(_c, 0, m);
  cMsg_ag0DiKxn_sendMessage(_c, 0, m);
  cMsg_zh1FYJgX_sendMessage(_c, 0, m);
  cMsg_oyVr8wR3_sendMessage(_c, 0, m);
  cMsg_8Q0By4la_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_A647drtG_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_OLphG3kr_sendMessage(_c, 0, m);
  cMsg_HjNLuBI8_sendMessage(_c, 0, m);
  cMsg_mxHMVjaM_sendMessage(_c, 0, m);
  cMsg_S5KoQdp5_sendMessage(_c, 0, m);
  cMsg_QKQbhtDP_sendMessage(_c, 0, m);
  cMsg_NaGBUK0e_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_TxpRhYxL_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_4djfb1hH_sendMessage(_c, 0, m);
  cMsg_160aor8v_sendMessage(_c, 0, m);
  cMsg_3gAK72Rv_sendMessage(_c, 0, m);
  cMsg_aQPFcehR_sendMessage(_c, 0, m);
  cMsg_TJs156TB_sendMessage(_c, 0, m);
  cMsg_ktkEUnqn_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_hNjSNTLz_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_uZtBHsbZ_sendMessage(_c, 0, m);
  cMsg_YZW9Xlpi_sendMessage(_c, 0, m);
  cMsg_Ba6Vu3Pl_sendMessage(_c, 0, m);
  cMsg_EVnbUy35_sendMessage(_c, 0, m);
  cMsg_3e5S7omD_sendMessage(_c, 0, m);
  cMsg_SIkw9Aus_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_gvIXIMI9_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_zBsehQrA_sendMessage(_c, 0, m);
  cMsg_JO2ESbfu_sendMessage(_c, 0, m);
  cMsg_5A1X1tJN_sendMessage(_c, 0, m);
  cMsg_whecChQm_sendMessage(_c, 0, m);
  cMsg_WpLAvpAv_sendMessage(_c, 0, m);
  cMsg_PQXa5gZ7_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_DPH6u8Ku_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cMsg_U81pVoV6_sendMessage(_c, 0, m);
  cMsg_XrpkHFgO_sendMessage(_c, 0, m);
  cMsg_ibvtl1MG_sendMessage(_c, 0, m);
  cMsg_eQL6SLDW_sendMessage(_c, 0, m);
  cMsg_eEVZFjDY_sendMessage(_c, 0, m);
  cMsg_PJrtBFg7_sendMessage(_c, 0, m);
}

void Heavy_TheCloud::cReceive_19tJtUEr_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_c5YoSADM, HV_BINOP_MULTIPLY, 1, m, &cBinop_c5YoSADM_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_t7EiLzFn_sendMessage);
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_NM2hNhQ2_sendMessage);
}

void Heavy_TheCloud::cReceive_hWP3K9JW_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_agUs1mOh, HV_BINOP_MULTIPLY, 1, m, &cBinop_agUs1mOh_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_WrLZnSjc, HV_BINOP_MULTIPLY, 1, m, &cBinop_WrLZnSjc_sendMessage);
}

void Heavy_TheCloud::cReceive_6RvBSMdY_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_onMessage(_c, &Context(_c)->cBinop_TF0lCoKf, HV_BINOP_MULTIPLY, 1, m, &cBinop_TF0lCoKf_sendMessage);
  cBinop_onMessage(_c, &Context(_c)->cBinop_5Q4qf7XC, HV_BINOP_MULTIPLY, 1, m, &cBinop_5Q4qf7XC_sendMessage);
}

void Heavy_TheCloud::cReceive_KtoSKeW3_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cPack_onMessage(_c, &Context(_c)->cPack_Ly0M8SId, 0, m, &cPack_Ly0M8SId_sendMessage);
}

void Heavy_TheCloud::cReceive_XUBqGUVN_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cCast_onMessage(_c, HV_CAST_BANG, 0, m, &cCast_tygvNGJP_sendMessage);
  cCast_onMessage(_c, HV_CAST_FLOAT, 0, m, &cCast_fHyGujfU_sendMessage);
}

void Heavy_TheCloud::cReceive_dAkTkM3Y_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 1.57f, 0, m, &cBinop_qHGrt3MM_sendMessage);
  cBinop_k_onMessage(_c, NULL, HV_BINOP_MULTIPLY, 1.57f, 0, m, &cBinop_cw48RaoQ_sendMessage);
}

void Heavy_TheCloud::cReceive_gS94yw7j_sendMessage(HeavyContextInterface *_c, int letIn, const HvMessage *m) {
  cVar_onMessage(_c, &Context(_c)->cVar_uZHhfHHh, 0, m, &cVar_uZHhfHHh_sendMessage);
}




/*
 * Context Process Implementation
 */

int Heavy_TheCloud::process(float **inputBuffers, float **outputBuffers, int n) {
  while (hLp_hasData(&inQueue)) {
    hv_uint32_t numBytes = 0;
    ReceiverMessagePair *p = reinterpret_cast<ReceiverMessagePair *>(hLp_getReadBuffer(&inQueue, &numBytes));
    hv_assert(numBytes >= sizeof(ReceiverMessagePair));
    scheduleMessageForReceiver(p->receiverHash, &p->msg);
    hLp_consume(&inQueue);
  }
  const int n4 = n & ~HV_N_SIMD_MASK; // ensure that the block size is a multiple of HV_N_SIMD

  // temporary signal vars
  hv_bufferf_t Bf0, Bf1, Bf2, Bf3, Bf4, Bf5;
  hv_bufferi_t Bi0, Bi1;

  // input and output vars
  hv_bufferf_t O0, O1;
  hv_bufferf_t I0;

  // declare and init the zero buffer
  hv_bufferf_t ZERO; __hv_zero_f(VOf(ZERO));

  hv_uint32_t nextBlock = blockStartTimestamp;
  for (int n = 0; n < n4; n += HV_N_SIMD) {

    // process all of the messages for this block
    nextBlock += HV_N_SIMD;
    while (mq_hasMessageBefore(&mq, nextBlock)) {
      MessageNode *const node = mq_peek(&mq);
      node->sendMessage(this, node->let, node->m);
      mq_pop(&mq);
    }

    // load input buffers
    __hv_load_f(inputBuffers[0]+n, VOf(I0));

    // zero output buffers
    __hv_zero_f(VOf(O0));
    __hv_zero_f(VOf(O1));

    // process all signal functions
    __hv_line_f(&sLine_U2iaix7D, VOf(Bf0));
    __hv_tabwrite_f(&sTabwrite_hyR10Y1r, VIf(I0));
    __hv_tabhead_f(&sTabhead_ANHcqfNz, VOf(Bf1));
    __hv_var_k_f_r(VOf(Bf2), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_varread_f(&sVarf_STfqpFA8, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_6r9gZyd1, VOf(Bf0));
    __hv_min_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf1));
    __hv_max_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf2), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf2));
    __hv_varread_f(&sVarf_N2T3tXUe, VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_40nzdmYb, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_zUHGqNhc, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf3));
    __hv_sub_f(VIf(Bf1), VIf(Bf2), VOf(Bf2));
    __hv_fma_f(VIf(Bf3), VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_BApgl2lA, VOf(Bf2));
    __hv_rpole_f(&sRPole_Qt4hoYCb, VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_var_k_f(VOf(Bf0), 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f);
    __hv_del1_f(&sDel1_g7qofTD6, VIf(Bf2), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf2), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_dCM6fXO7, VOf(Bf2));
    __hv_mul_f(VIf(Bf0), VIf(Bf2), VOf(Bf2));
    __hv_line_f(&sLine_qJOMd2sW, VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf5), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_K74XnqS9, VOf(Bf4));
    __hv_tabhead_f(&sTabhead_g2PiP7aF, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf0), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_yZoSRGUA, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_VZzMLqXh, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf0));
    __hv_varread_f(&sVarf_bPiI0QwA, VOf(Bf4));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_DRcuLHJT, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_S4Biz3Il, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf1), VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_6YDGWA4N, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_wFzy6YW9, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_VVYgMAAo, VOf(Bf0));
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_emSr2ZfV, VIf(Bf4));
    __hv_varwrite_f(&sVarf_P5W6jL09, VIf(Bf0));
    __hv_line_f(&sLine_xPwqRDRY, VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf4));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf3), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_8NTrJPnd, VOf(Bf1));
    __hv_tabhead_f(&sTabhead_jtK8uOsB, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf0), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_kpkYqVuA, VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_Ji8whKbf, VOf(Bf1));
    __hv_min_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf0));
    __hv_varread_f(&sVarf_Jf94M1OO, VOf(Bf1));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_fSORjJBV, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_sWJdYRyu, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf5));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf5), VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_dgyFyp5x, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_gOAcoRmV, VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_6uBDEnGR, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_9zh9dOPw, VIf(Bf0));
    __hv_varwrite_f(&sVarf_5JOjI5HP, VIf(Bf1));
    __hv_line_f(&sLine_ic6RK1xu, VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf4), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf0), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_Ewvj7EN3, VOf(Bf5));
    __hv_tabhead_f(&sTabhead_lEoa9cuA, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf1), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_LKXYBn6q, VOf(Bf0));
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_nvwo0U61, VOf(Bf5));
    __hv_min_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf1));
    __hv_varread_f(&sVarf_3Xjk4ksj, VOf(Bf5));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_SMNCSBdz, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_Zw9URY1w, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_ybwTetzy, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_jPCqn6k6, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_bOzye91X, VOf(Bf1));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_f(&sVarf_TLlZbZU8, VIf(Bf5));
    __hv_varwrite_f(&sVarf_rsfZWEDS, VIf(Bf1));
    __hv_line_f(&sLine_sYPbVxki, VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf5));
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf5));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf5), VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_w4sn3Tj5, VOf(Bf3));
    __hv_tabhead_f(&sTabhead_0PyaXQIX, VOf(Bf5));
    __hv_var_k_f_r(VOf(Bf1), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_9zHwqlaG, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_rBGu3SVx, VOf(Bf3));
    __hv_min_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf5));
    __hv_max_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf1));
    __hv_varread_f(&sVarf_pMOsiyrV, VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_AxADIrDQ, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_hCT02Zcu, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf4), VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_sxjJuHyY, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_GiEL5BFn, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_xy0UTPMm, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_f(&sVarf_dNUqFTkZ, VIf(Bf3));
    __hv_varwrite_f(&sVarf_CuhoGqcN, VIf(Bf1));
    __hv_line_f(&sLine_iJRFhtfY, VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf3));
    __hv_sub_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf5), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf3), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_QIUSkDQd, VOf(Bf4));
    __hv_tabhead_f(&sTabhead_l0LsDoS2, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf1), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_XaWACn7L, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_u0n6KKFj, VOf(Bf4));
    __hv_min_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf1));
    __hv_varread_f(&sVarf_xpIaDm4E, VOf(Bf4));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_4aPq3141, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_jZMyI5ig, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf0), VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_5OXNJTTB, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_JxBiTzgy, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_muLA3W5x, VOf(Bf1));
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_f(&sVarf_umeqZgpL, VIf(Bf4));
    __hv_varwrite_f(&sVarf_vrPRbMLr, VIf(Bf1));
    __hv_line_f(&sLine_mE9SYTCk, VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf0), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf3), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_eSYj7B2s, VOf(Bf0));
    __hv_tabhead_f(&sTabhead_kiuIs1QJ, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf1), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_fzaGOLVn, VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_w2O24xbf, VOf(Bf0));
    __hv_min_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf1));
    __hv_varread_f(&sVarf_kecHkxil, VOf(Bf0));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_TjGzwvP4, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_hjiM0UJJ, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf5));
    __hv_sub_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf5), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_Hlthdacx, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_F2D8Nlcw, VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_AS8ifjsZ, VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_f(&sVarf_cSXCnInZ, VIf(Bf1));
    __hv_varwrite_f(&sVarf_pGwRmq7y, VIf(Bf0));
    __hv_line_f(&sLine_Msc4LKex, VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf4), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf1), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_NdbNwyQH, VOf(Bf5));
    __hv_tabhead_f(&sTabhead_MFxVTctd, VOf(Bf1));
    __hv_var_k_f_r(VOf(Bf0), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_jYxQMstI, VOf(Bf1));
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_XNmAWP2X, VOf(Bf5));
    __hv_min_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf1));
    __hv_max_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf0));
    __hv_varread_f(&sVarf_J6EuETfK, VOf(Bf5));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_8YMC83lX, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_OsnXF6UL, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf3));
    __hv_sub_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf3), VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_N8TvTak9, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_RMzbzYRs, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_eefELGIi, VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_KsAfCbR1, VIf(Bf5));
    __hv_varwrite_f(&sVarf_JIOudGFy, VIf(Bf0));
    __hv_line_f(&sLine_mJeytBZi, VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf5));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_abs_f(VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf0), VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf1), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf5), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_Byakhyio, VOf(Bf3));
    __hv_tabhead_f(&sTabhead_0U1YIrpq, VOf(Bf5));
    __hv_var_k_f_r(VOf(Bf0), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_vwL9BJBf, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_ox4PtkBE, VOf(Bf3));
    __hv_min_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf5));
    __hv_max_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf0));
    __hv_varread_f(&sVarf_8fvLN5QG, VOf(Bf3));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_MMkThwDL, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_oovx4V9C, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf4), VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_7OoXCrfm, VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_miOmxx01, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_oN1zOyHj, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varwrite_f(&sVarf_li73qbAw, VIf(Bf0));
    __hv_varwrite_f(&sVarf_QiTl86Of, VIf(Bf3));
    __hv_line_f(&sLine_rOdG8ARk, VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf5), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf0), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_Vd89jAeG, VOf(Bf4));
    __hv_tabhead_f(&sTabhead_46cJW02x, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_uGbCrA5s, VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_vpyWLFKn, VOf(Bf4));
    __hv_min_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf3));
    __hv_varread_f(&sVarf_iW4GI2wF, VOf(Bf4));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_01fuk30O, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_3KnIZI4w, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_WNDVo378, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_0VzekF9H, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_3bngrdtP, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_dCwaFRtR, VIf(Bf4));
    __hv_varwrite_f(&sVarf_fMLpkCTl, VIf(Bf3));
    __hv_line_f(&sLine_ozqSavGP, VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf4), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_r9ATdssl, VOf(Bf1));
    __hv_tabhead_f(&sTabhead_gVEW6g29, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_F6mLncx7, VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_rriK6kZX, VOf(Bf1));
    __hv_min_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf3));
    __hv_varread_f(&sVarf_XtOUls5X, VOf(Bf1));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_Ew9SIxfr, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_1ixJuu1w, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf5));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf5), VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_YrM8wzSl, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_GD5ku6wj, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_zgUFhuRJ, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_jpxhGu8K, VIf(Bf1));
    __hv_varwrite_f(&sVarf_wVnT35Ft, VIf(Bf3));
    __hv_line_f(&sLine_xJnplTCJ, VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf4), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf1), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_NCMr4Wgc, VOf(Bf5));
    __hv_tabhead_f(&sTabhead_lKOD0Vek, VOf(Bf1));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_KYUE9gfa, VOf(Bf1));
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_0M3iEMCP, VOf(Bf5));
    __hv_min_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf1));
    __hv_max_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf3));
    __hv_varread_f(&sVarf_O4AlC0Ey, VOf(Bf5));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_6Hh6vOr7, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_6DmWwLqD, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_fCrvrslZ, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_hUy3iVay, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_ZBcGGgFr, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_xo4pE3Ue, VIf(Bf3));
    __hv_varwrite_f(&sVarf_Smv71KqB, VIf(Bf5));
    __hv_line_f(&sLine_ImvOqxqQ, VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf1), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_LoYXT3xz, VOf(Bf0));
    __hv_tabhead_f(&sTabhead_Uf0cCByY, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf5), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_uM4tpPyg, VOf(Bf3));
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_VOhHVzYv, VOf(Bf0));
    __hv_min_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf5));
    __hv_varread_f(&sVarf_NAmnpI4c, VOf(Bf0));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_XeqZ0pz7, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_4Gost8N4, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf4));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf4), VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_QFvb2OaL, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_R8GIG8OJ, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_N28xvVIG, VOf(Bf5));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_fi9LnUjT, VIf(Bf0));
    __hv_varwrite_f(&sVarf_Tk5eB9jW, VIf(Bf5));
    __hv_line_f(&sLine_WYvesEtM, VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf0));
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf0));
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf3), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf0), VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_GYEWKr57, VOf(Bf4));
    __hv_tabhead_f(&sTabhead_pr1hmmEF, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf5), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_zWl3sJkE, VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_MqgM9UTS, VOf(Bf4));
    __hv_min_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf5));
    __hv_varread_f(&sVarf_meuXxB8N, VOf(Bf4));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_1qrGaQ7I, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_b3iuql4Z, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf1), VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_4kL1sGwi, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_xUPcNiyD, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_b5TsHCXG, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_ywrIayPx, VIf(Bf4));
    __hv_varwrite_f(&sVarf_KUwINf2M, VIf(Bf5));
    __hv_line_f(&sLine_nVKIv82n, VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf4), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_xJ1XdzEh, VOf(Bf1));
    __hv_tabhead_f(&sTabhead_qGY9oDjK, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf5), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_UOPHMNus, VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_dHCTW8Ly, VOf(Bf1));
    __hv_min_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf5));
    __hv_varread_f(&sVarf_xhDDdyDZ, VOf(Bf1));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_8RQ0hzAQ, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_xt57abxM, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf3), VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_VNRGvTvC, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_ArnuDUiq, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_ic8CqQQU, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_0obmHhjL, VIf(Bf1));
    __hv_varwrite_f(&sVarf_SUD3RASI, VIf(Bf5));
    __hv_line_f(&sLine_3Ws9zF0v, VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_abs_f(VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf5), VOf(Bf1));
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf3), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf4), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf1), VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_fXsQ9Klq, VOf(Bf3));
    __hv_tabhead_f(&sTabhead_ujEOXJMI, VOf(Bf1));
    __hv_var_k_f_r(VOf(Bf5), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_vRjmzzGt, VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_llNp3KEG, VOf(Bf3));
    __hv_min_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_zero_f(VOf(Bf1));
    __hv_max_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf5));
    __hv_varread_f(&sVarf_Or0KXkK7, VOf(Bf3));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_CnLQ05Mf, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_4oX4EulM, VIi(Bi0), VOf(Bf3));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf0));
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf0), VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_AayV8Teb, VOf(Bf4));
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_gyqlqmBM, VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_ZG2TDkkQ, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varwrite_f(&sVarf_K9GSeNKT, VIf(Bf5));
    __hv_varwrite_f(&sVarf_3B3D6T5d, VIf(Bf3));
    __hv_line_f(&sLine_Ar1JfTj5, VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf1), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_sub_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf5), VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_line_f(&sLine_K1BDjFNr, VOf(Bf0));
    __hv_tabhead_f(&sTabhead_sA2lgwzm, VOf(Bf5));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_7HAkZZln, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_maOg4g8k, VOf(Bf0));
    __hv_min_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf5));
    __hv_max_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf3));
    __hv_varread_f(&sVarf_oFtFtzYP, VOf(Bf0));
    __hv_zero_f(VOf(Bf4));
    __hv_lt_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_and_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_cast_fi(VIf(Bf4), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_KGChq91Z, VIi(Bi1), VOf(Bf4));
    __hv_tabread_if(&sTabread_NKHG7QIY, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf4));
    __hv_sub_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_kUrMx431, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_bHz31RG7, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_nrPAMMtz, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_VwTVUAdq, VIf(Bf0));
    __hv_varwrite_f(&sVarf_0v5v5qaR, VIf(Bf3));
    __hv_line_f(&sLine_eKHbf2yJ, VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_abs_f(VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf0), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf3), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf3), VOf(Bf0));
    __hv_mul_f(VIf(Bf3), VIf(Bf0), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_var_k_f(VOf(Bf4), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf5), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_fma_f(VIf(Bf0), VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_line_f(&sLine_c3Emob10, VOf(Bf4));
    __hv_tabhead_f(&sTabhead_5R1YKscx, VOf(Bf0));
    __hv_var_k_f_r(VOf(Bf3), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_ipo8Kuxd, VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_4zbLoX08, VOf(Bf4));
    __hv_min_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_zero_f(VOf(Bf0));
    __hv_max_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf0));
    __hv_floor_f(VIf(Bf0), VOf(Bf3));
    __hv_varread_f(&sVarf_FaSyoXt7, VOf(Bf4));
    __hv_zero_f(VOf(Bf1));
    __hv_lt_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_and_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_cast_fi(VIf(Bf1), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_86PXo2Nm, VIi(Bi1), VOf(Bf1));
    __hv_tabread_if(&sTabread_U4Rmq8EJ, VIi(Bi0), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf1));
    __hv_sub_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_QjWP0bUf, VOf(Bf5));
    __hv_mul_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_QFBfjh3J, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_RPgowcxs, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varwrite_f(&sVarf_yxm3a3WD, VIf(Bf3));
    __hv_varwrite_f(&sVarf_MjS6wqCb, VIf(Bf4));
    __hv_line_f(&sLine_b3qKkgrm, VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_abs_f(VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf3), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf4), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_mul_f(VIf(Bf4), VIf(Bf4), VOf(Bf3));
    __hv_mul_f(VIf(Bf4), VIf(Bf3), VOf(Bf5));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_var_k_f(VOf(Bf1), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf0), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_sub_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_fma_f(VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_line_f(&sLine_Xlb9seAn, VOf(Bf1));
    __hv_tabhead_f(&sTabhead_v8p1geId, VOf(Bf3));
    __hv_var_k_f_r(VOf(Bf4), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_hXOVRGBn, VOf(Bf3));
    __hv_mul_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Xy1hjWbm, VOf(Bf1));
    __hv_min_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_zero_f(VOf(Bf3));
    __hv_max_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf4), VIf(Bf3), VOf(Bf3));
    __hv_floor_f(VIf(Bf3), VOf(Bf4));
    __hv_varread_f(&sVarf_2yhGBBPZ, VOf(Bf1));
    __hv_zero_f(VOf(Bf5));
    __hv_lt_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_and_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_add_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_cast_fi(VIf(Bf5), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_obFWxAV9, VIi(Bi1), VOf(Bf5));
    __hv_tabread_if(&sTabread_CtGCYwFC, VIi(Bi0), VOf(Bf1));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf5));
    __hv_sub_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf5), VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_xLwYFOQX, VOf(Bf0));
    __hv_mul_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_3F3mnKEo, VOf(Bf1));
    __hv_mul_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_lI8thHgB, VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varwrite_f(&sVarf_aUEdUnAn, VIf(Bf4));
    __hv_varwrite_f(&sVarf_N5xPWr1J, VIf(Bf1));
    __hv_line_f(&sLine_XGWlWz6x, VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf4), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf4));
    __hv_mul_f(VIf(Bf1), VIf(Bf4), VOf(Bf0));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_var_k_f(VOf(Bf5), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf3), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_sub_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf4), VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_line_f(&sLine_1vnXhyvH, VOf(Bf5));
    __hv_tabhead_f(&sTabhead_txgtIPWD, VOf(Bf4));
    __hv_var_k_f_r(VOf(Bf1), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_XGUOlvoi, VOf(Bf4));
    __hv_mul_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_GfJ7d4t3, VOf(Bf5));
    __hv_min_f(VIf(Bf4), VIf(Bf5), VOf(Bf5));
    __hv_zero_f(VOf(Bf4));
    __hv_max_f(VIf(Bf5), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_floor_f(VIf(Bf4), VOf(Bf1));
    __hv_varread_f(&sVarf_mTRfQwOW, VOf(Bf5));
    __hv_zero_f(VOf(Bf0));
    __hv_lt_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_and_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_add_f(VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_cast_fi(VIf(Bf0), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_lGROm9qC, VIi(Bi1), VOf(Bf0));
    __hv_tabread_if(&sTabread_WgU6ZlBj, VIi(Bi0), VOf(Bf5));
    __hv_sub_f(VIf(Bf0), VIf(Bf5), VOf(Bf0));
    __hv_sub_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf0), VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_kRxJXBSE, VOf(Bf3));
    __hv_mul_f(VIf(Bf5), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_QGIDpVop, VOf(Bf5));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_8dBEQJ7N, VOf(Bf1));
    __hv_mul_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_f(&sVarf_T9F3Wtts, VIf(Bf5));
    __hv_varwrite_f(&sVarf_jjePMY4u, VIf(Bf1));
    __hv_line_f(&sLine_cIn2bOMU, VOf(Bf1));
    __hv_floor_f(VIf(Bf1), VOf(Bf5));
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f, 0.5f);
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_abs_f(VIf(Bf1), VOf(Bf1));
    __hv_var_k_f(VOf(Bf5), 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f, 0.25f);
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf1), 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f, 6.28319f);
    __hv_mul_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_mul_f(VIf(Bf1), VIf(Bf1), VOf(Bf5));
    __hv_mul_f(VIf(Bf1), VIf(Bf5), VOf(Bf3));
    __hv_mul_f(VIf(Bf3), VIf(Bf5), VOf(Bf5));
    __hv_var_k_f(VOf(Bf0), 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f, 0.00784314f);
    __hv_var_k_f(VOf(Bf4), 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f, 0.166667f);
    __hv_mul_f(VIf(Bf3), VIf(Bf4), VOf(Bf4));
    __hv_sub_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf5), VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_line_f(&sLine_2fN2aP8r, VOf(Bf0));
    __hv_tabhead_f(&sTabhead_Tli0rQ96, VOf(Bf5));
    __hv_var_k_f_r(VOf(Bf1), -1.0f, -2.0f, -3.0f, -4.0f, -5.0f, -6.0f, -7.0f, -8.0f);
    __hv_add_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_YpZND8K0, VOf(Bf5));
    __hv_mul_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_varread_f(&sVarf_9zJTmOAt, VOf(Bf0));
    __hv_min_f(VIf(Bf5), VIf(Bf0), VOf(Bf0));
    __hv_zero_f(VOf(Bf5));
    __hv_max_f(VIf(Bf0), VIf(Bf5), VOf(Bf5));
    __hv_sub_f(VIf(Bf1), VIf(Bf5), VOf(Bf5));
    __hv_floor_f(VIf(Bf5), VOf(Bf1));
    __hv_varread_f(&sVarf_qSNddLjm, VOf(Bf0));
    __hv_zero_f(VOf(Bf3));
    __hv_lt_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_and_f(VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_cast_fi(VIf(Bf3), VOi(Bi0));
    __hv_var_k_i(VOi(Bi1), 1, 1, 1, 1, 1, 1, 1, 1);
    __hv_add_i(VIi(Bi0), VIi(Bi1), VOi(Bi1));
    __hv_tabread_if(&sTabread_vR0esAYL, VIi(Bi1), VOf(Bf3));
    __hv_tabread_if(&sTabread_0oV5sG0c, VIi(Bi0), VOf(Bf0));
    __hv_sub_f(VIf(Bf3), VIf(Bf0), VOf(Bf3));
    __hv_sub_f(VIf(Bf5), VIf(Bf1), VOf(Bf1));
    __hv_fma_f(VIf(Bf3), VIf(Bf1), VIf(Bf0), VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_J79giJu1, VOf(Bf4));
    __hv_mul_f(VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_65HklZHC, VOf(Bf0));
    __hv_mul_f(VIf(Bf4), VIf(Bf0), VOf(Bf0));
    __hv_varread_f(&sVarf_ZZYT4TBo, VOf(Bf1));
    __hv_mul_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varwrite_f(&sVarf_MfMGCJwD, VIf(Bf1));
    __hv_varwrite_f(&sVarf_xNxXhHMP, VIf(Bf0));
    __hv_varread_f(&sVarf_emSr2ZfV, VOf(Bf0));
    __hv_varread_f(&sVarf_9zh9dOPw, VOf(Bf1));
    __hv_varread_f(&sVarf_TLlZbZU8, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_dNUqFTkZ, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_umeqZgpL, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_cSXCnInZ, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_KsAfCbR1, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_li73qbAw, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_dCwaFRtR, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_jpxhGu8K, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_xo4pE3Ue, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_fi9LnUjT, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_ywrIayPx, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_0obmHhjL, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_K9GSeNKT, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_MfMGCJwD, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_VwTVUAdq, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_yxm3a3WD, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_aUEdUnAn, VOf(Bf4));
    __hv_add_f(VIf(Bf1), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_T9F3Wtts, VOf(Bf1));
    __hv_add_f(VIf(Bf4), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_Gc1cNjPv, VOf(Bf0));
    __hv_varread_f(&sVarf_nt1zDSpx, VOf(Bf4));
    __hv_mul_f(VIf(Bf2), VIf(Bf4), VOf(Bf4));
    __hv_fma_f(VIf(Bf1), VIf(Bf0), VIf(Bf4), VOf(Bf4));
    __hv_varread_f(&sVarf_P5W6jL09, VOf(Bf0));
    __hv_varread_f(&sVarf_5JOjI5HP, VOf(Bf1));
    __hv_varread_f(&sVarf_rsfZWEDS, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_CuhoGqcN, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_vrPRbMLr, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_pGwRmq7y, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_JIOudGFy, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_QiTl86Of, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_fMLpkCTl, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_wVnT35Ft, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_Smv71KqB, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_Tk5eB9jW, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_KUwINf2M, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_SUD3RASI, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_3B3D6T5d, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_xNxXhHMP, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_0v5v5qaR, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_MjS6wqCb, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_N5xPWr1J, VOf(Bf3));
    __hv_add_f(VIf(Bf1), VIf(Bf3), VOf(Bf3));
    __hv_varread_f(&sVarf_jjePMY4u, VOf(Bf1));
    __hv_add_f(VIf(Bf3), VIf(Bf1), VOf(Bf1));
    __hv_add_f(VIf(Bf0), VIf(Bf1), VOf(Bf1));
    __hv_varread_f(&sVarf_iRoYF6jx, VOf(Bf0));
    __hv_varread_f(&sVarf_gsj2KXaP, VOf(Bf3));
    __hv_mul_f(VIf(Bf2), VIf(Bf3), VOf(Bf3));
    __hv_fma_f(VIf(Bf1), VIf(Bf0), VIf(Bf3), VOf(Bf3));
    __hv_add_f(VIf(Bf3), VIf(O1), VOf(O1));
    __hv_add_f(VIf(Bf4), VIf(O0), VOf(O0));

    // save output vars to output buffer
    __hv_store_f(outputBuffers[0]+n, VIf(O0));
    __hv_store_f(outputBuffers[1]+n, VIf(O1));
  }

  blockStartTimestamp = nextBlock;

  return n4; // return the number of frames processed
}

int Heavy_TheCloud::processInline(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(!(n4 & HV_N_SIMD_MASK)); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s)
  float **const bIn = &inputBuffers;

  // define the heavy output buffer for 2 channel(s)
  float **const bOut = reinterpret_cast<float **>(hv_alloca(2*sizeof(float *)));
  bOut[0] = outputBuffers+(0*n4);
  bOut[1] = outputBuffers+(1*n4);

  int n = process(bIn, bOut, n4);
  return n;
}

int Heavy_TheCloud::processInlineInterleaved(float *inputBuffers, float *outputBuffers, int n4) {
  hv_assert(n4 & ~HV_N_SIMD_MASK); // ensure that n4 is a multiple of HV_N_SIMD

  // define the heavy input buffer for 1 channel(s), uninterleave
  float *const bIn = inputBuffers;

  // define the heavy output buffer for 2 channel(s)
  float *const bOut = reinterpret_cast<float *>(hv_alloca(2*n4*sizeof(float)));

  int n = processInline(bIn, bOut, n4);

  // interleave the heavy output into the output buffer
  #if HV_SIMD_AVX
  for (int i = 0, j = 0; j < n4; j += 8, i += 16) {
    __m256 x = _mm256_load_ps(bOut+j);    // LLLLLLLL
    __m256 y = _mm256_load_ps(bOut+n4+j); // RRRRRRRR
    __m256 a = _mm256_unpacklo_ps(x, y);  // LRLRLRLR
    __m256 b = _mm256_unpackhi_ps(x, y);  // LRLRLRLR
    _mm256_store_ps(outputBuffers+i, a);
    _mm256_store_ps(outputBuffers+8+i, b);
  }
  #elif HV_SIMD_SSE
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    __m128 x = _mm_load_ps(bOut+j);    // LLLL
    __m128 y = _mm_load_ps(bOut+n4+j); // RRRR
    __m128 a = _mm_unpacklo_ps(x, y);  // LRLR
    __m128 b = _mm_unpackhi_ps(x, y);  // LRLR
    _mm_store_ps(outputBuffers+i, a);
    _mm_store_ps(outputBuffers+4+i, b);
  }
  #elif HV_SIMD_NEON
  // https://community.arm.com/groups/processors/blog/2012/03/13/coding-for-neon--part-5-rearranging-vectors
  for (int i = 0, j = 0; j < n4; j += 4, i += 8) {
    float32x4_t x = vld1q_f32(bOut+j);
    float32x4_t y = vld1q_f32(bOut+n4+j);
    float32x4x2_t z = {x, y};
    vst2q_f32(outputBuffers+i, z); // interleave and store
  }
  #else // HV_SIMD_NONE
  for (int i = 0; i < 2; ++i) {
    for (int j = 0; j < n4; ++j) {
      outputBuffers[i+2*j] = bOut[i*n4+j];
    }
  }
  #endif

  return n;
}
