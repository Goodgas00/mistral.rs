// msvc_cuda_compat.h - pre-included into flashinfer kernels for MSVC portability.
// These are Linux/GCC assumptions in the vendored flashinfer headers, not arch limits.
#pragma once

#ifdef _MSC_VER
// glibc typedef absent from MSVC; used by inline PTX ex2/tanh f16 helpers.
#ifndef __ushort_defined_once
#define __ushort_defined_once
typedef unsigned short ushort;
#endif
#endif

#ifdef _MSC_VER
// GCC attribute syntax appears in vendored flashinfer headers. MSVC has no equivalent
// keyword; force-inline is a hint only, so neutralizing it is behaviour-preserving.
#ifndef __attribute__
#define __attribute__(x)
#endif
#endif
