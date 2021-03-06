/*
 * Copyright (c) 2016 Craig Stout <cstout@chromium.org>
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
 * CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
 * TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 * SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

// 1.28 Inch Monocromatic Sharp Memory LCD

#pragma once

#include <dev/display.h>

#define MLCD_WIDTH  ((uint16_t)128)
#define MLCD_HEIGHT ((uint16_t)128)

// 1 bit per pixel divided by 8 bits per byte
#define MLCD_BYTES_LINE  (MLCD_WIDTH / 8)

#define FB_FORMAT               (DISPLAY_FORMAT_MONO_1)
#define FB_STRIDE               (MLCD_BYTES_LINE)

uint8_t lcd_get_line(uint8_t *framebuffer, uint8_t idx, uint8_t *result);
