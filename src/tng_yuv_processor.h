/*
 * Copyright (c) 2011 Intel Corporation. All Rights Reserved.
 * Copyright (c) Imagination Technologies Limited, UK
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sub license, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice (including the
 * next paragraph) shall be included in all copies or substantial portions
 * of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT.
 * IN NO EVENT SHALL PRECISION INSIGHT AND/OR ITS SUPPLIERS BE LIABLE FOR
 * ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/*
 * Authors:
 *    Li Zeng <li.zeng@intel.com>
 */

struct surface_param_s {
	uint32_t display_width; /* widht of the image */
	uint32_t display_height; /* height of the image */

	uint32_t coded_width; /* width of the image rounding up to nearest multiple of 16 */
	uint32_t coded_height; /* height of the image rounding up to nearest multiple of 16 */
};

typedef struct surface_param_s *surface_param_p;

struct context_yuv_processor_s {
    uint32_t display_width;
    uint32_t display_height;
    uint32_t coded_width;
    uint32_t coded_height;
    psb_surface_p target_surface;
};

typedef struct context_yuv_processor_s *context_yuv_processor_p;


#define YUVProcessorSurfaceType 0xdeadbeef

extern struct format_vtable_s tng_yuv_processor_vtable;