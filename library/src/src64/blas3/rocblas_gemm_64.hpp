/* ************************************************************************
 * Copyright (C) 2024 Advanced Micro Devices, Inc. All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell cop-
 * ies of the Software, and to permit persons to whom the Software is furnished
 * to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IM-
 * PLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNE-
 * CTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * ************************************************************************ */

#pragma once

#include "handle.hpp"
#include "rocblas.h"

template <typename T>
ROCBLAS_INTERNAL_EXPORT_NOINLINE rocblas_status
    rocblas_internal_gemm_template_64(rocblas_handle    handle,
                                      rocblas_operation trans_a,
                                      rocblas_operation trans_b,
                                      int64_t           m,
                                      int64_t           n,
                                      int64_t           k,
                                      const T*          alpha,
                                      const T*          A,
                                      rocblas_stride    offset_a,
                                      int64_t           lda,
                                      rocblas_stride    stride_a,
                                      const T*          B,
                                      rocblas_stride    offset_b,
                                      int64_t           ldb,
                                      rocblas_stride    stride_b,
                                      const T*          beta,
                                      T*                C,
                                      rocblas_stride    offset_c,
                                      int64_t           ldc,
                                      rocblas_stride    stride_c,
                                      int64_t           batch_count);

template <typename T>
ROCBLAS_INTERNAL_EXPORT_NOINLINE rocblas_status
    rocblas_internal_gemm_batched_template_64(rocblas_handle    handle,
                                              rocblas_operation trans_a,
                                              rocblas_operation trans_b,
                                              int64_t           m,
                                              int64_t           n,
                                              int64_t           k,
                                              const T*          alpha,
                                              const T* const*   A,
                                              rocblas_stride    offset_a,
                                              int64_t           lda,
                                              rocblas_stride    stride_a,
                                              const T* const*   B,
                                              rocblas_stride    offset_b,
                                              int64_t           ldb,
                                              rocblas_stride    stride_b,
                                              const T*          beta,
                                              T* const*         C,
                                              rocblas_stride    offset_c,
                                              int64_t           ldc,
                                              rocblas_stride    stride_c,
                                              int64_t           batch_count);
