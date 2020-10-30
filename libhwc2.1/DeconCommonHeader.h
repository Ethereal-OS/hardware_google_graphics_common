/*
 * Copyright (C) 2020 The Android Open Source Project
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _DECON_COMMON_HELPER_H
#define _DECON_COMMON_HELPER_H
#include <vector>
typedef unsigned int u32;

struct decon_win_rect {
    int x;
    int y;
    uint32_t w;
    uint32_t h;
};

struct decon_frame {
    int x;
    int y;
    uint32_t w;
    uint32_t h;
    uint32_t f_w;
    uint32_t f_h;
};

enum decon_pixel_format {
  DECON_PIXEL_FORMAT_ARGB_8888 = 0,
  DECON_PIXEL_FORMAT_ABGR_8888,
  DECON_PIXEL_FORMAT_RGBA_8888,
  DECON_PIXEL_FORMAT_BGRA_8888,
  DECON_PIXEL_FORMAT_XRGB_8888,
  DECON_PIXEL_FORMAT_XBGR_8888,
  DECON_PIXEL_FORMAT_RGBX_8888,
  DECON_PIXEL_FORMAT_BGRX_8888,
  DECON_PIXEL_FORMAT_RGBA_5551,
  DECON_PIXEL_FORMAT_BGRA_5551,
  DECON_PIXEL_FORMAT_ABGR_4444,
  DECON_PIXEL_FORMAT_RGBA_4444,
  DECON_PIXEL_FORMAT_BGRA_4444,
  DECON_PIXEL_FORMAT_RGB_565,
  DECON_PIXEL_FORMAT_BGR_565,
  DECON_PIXEL_FORMAT_ARGB_2101010,
  DECON_PIXEL_FORMAT_ABGR_2101010,
  DECON_PIXEL_FORMAT_RGBA_1010102,
  DECON_PIXEL_FORMAT_BGRA_1010102,
  DECON_PIXEL_FORMAT_NV16,
  DECON_PIXEL_FORMAT_NV61,
  DECON_PIXEL_FORMAT_YVU422_3P,
  DECON_PIXEL_FORMAT_NV12,
  DECON_PIXEL_FORMAT_NV21,
  DECON_PIXEL_FORMAT_NV12M,
  DECON_PIXEL_FORMAT_NV21M,
  DECON_PIXEL_FORMAT_YUV420,
  DECON_PIXEL_FORMAT_YVU420,
  DECON_PIXEL_FORMAT_YUV420M,
  DECON_PIXEL_FORMAT_YVU420M,
  DECON_PIXEL_FORMAT_NV12N,
  DECON_PIXEL_FORMAT_NV12N_10B,
  DECON_PIXEL_FORMAT_NV12M_P010,
  DECON_PIXEL_FORMAT_NV21M_P010,
  DECON_PIXEL_FORMAT_NV12M_S10B,
  DECON_PIXEL_FORMAT_NV21M_S10B,
  DECON_PIXEL_FORMAT_NV16M_P210,
  DECON_PIXEL_FORMAT_NV61M_P210,
  DECON_PIXEL_FORMAT_NV16M_S10B,
  DECON_PIXEL_FORMAT_NV61M_S10B,
  DECON_PIXEL_FORMAT_NV12_P010,
  /* formats for lossless SBWC case */
  DECON_PIXEL_FORMAT_NV12M_SBWC_8B,
  DECON_PIXEL_FORMAT_NV12M_SBWC_10B,
  DECON_PIXEL_FORMAT_NV21M_SBWC_8B,
  DECON_PIXEL_FORMAT_NV21M_SBWC_10B,
  DECON_PIXEL_FORMAT_NV12N_SBWC_8B,
  DECON_PIXEL_FORMAT_NV12N_SBWC_10B,
  /* formats for lossy SBWC case  */
  DECON_PIXEL_FORMAT_NV12M_SBWC_8B_L50,
  DECON_PIXEL_FORMAT_NV12M_SBWC_8B_L75,
  DECON_PIXEL_FORMAT_NV12N_SBWC_8B_L50,
  DECON_PIXEL_FORMAT_NV12N_SBWC_8B_L75,
  DECON_PIXEL_FORMAT_NV12M_SBWC_10B_L40,
  DECON_PIXEL_FORMAT_NV12M_SBWC_10B_L60,
  DECON_PIXEL_FORMAT_NV12M_SBWC_10B_L80,
  DECON_PIXEL_FORMAT_NV12N_SBWC_10B_L40,
  DECON_PIXEL_FORMAT_NV12N_SBWC_10B_L60,
  DECON_PIXEL_FORMAT_NV12N_SBWC_10B_L80,
  DECON_PIXEL_FORMAT_MAX,
};
enum dpp_comp_src {
  DPP_COMP_SRC_NONE = 0,
  DPP_COMP_SRC_G2D,
  DPP_COMP_SRC_GPU
};

enum dpp_attr {
    DPP_ATTR_AFBC           = 0,
    DPP_ATTR_BLOCK          = 1,
    DPP_ATTR_FLIP           = 2,
    DPP_ATTR_ROT            = 3,
    DPP_ATTR_CSC            = 4,
    DPP_ATTR_SCALE          = 5,
    DPP_ATTR_HDR            = 6,
    DPP_ATTR_C_HDR          = 7,
    DPP_ATTR_C_HDR10_PLUS   = 8,
    DPP_ATTR_WCG            = 9,
    DPP_ATTR_SBWC           = 10,
    DPP_ATTR_HDR10_PLUS     = 11,
    DPP_ATTR_IDMA           = 16,
    DPP_ATTR_ODMA           = 17,
    DPP_ATTR_DPP            = 18,
};
#endif