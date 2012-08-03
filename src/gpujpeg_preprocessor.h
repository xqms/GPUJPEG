/**
 * Copyright (c) 2011, CESNET z.s.p.o
 * Copyright (c) 2011, Silicon Genome, LLC.
 *
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef GPUJPEG_PREPROCESSOR_H
#define GPUJPEG_PREPROCESSOR_H

#include <libgpujpeg/gpujpeg_encoder.h>
#include <libgpujpeg/gpujpeg_decoder.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Init preprocessor encoder
 * 
 * @param encoder
 * @return 0 if succeeds, otherwise nonzero
 */
int
gpujpeg_preprocessor_encoder_init(struct gpujpeg_coder* coder);

/**
 * Preprocessor encode
 * 
 * @param encoder  Encoder structure
 * @param image  Image source data
 * @return 0 if succeeds, otherwise nonzero
 */
int
gpujpeg_preprocessor_encode(struct gpujpeg_coder* coder);

/**
 * Init preprocessor decoder
 * 
 * @param encoder
 * @return 0 if succeeds, otherwise nonzero
 */
int
gpujpeg_preprocessor_decoder_init(struct gpujpeg_coder* coder);

/**
 * Preprocessor decode
 * 
 * @param encoder  Encoder structure
 * @param image  Image source data
 * @return 0 if succeeds, otherwise nonzero
 */
int
gpujpeg_preprocessor_decode(struct gpujpeg_coder* coder);

#ifdef __cplusplus
}
#endif

#endif // GPUJPEG_PREPROCESSOR_H