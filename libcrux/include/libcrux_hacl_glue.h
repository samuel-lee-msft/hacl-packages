/* Hand-written file */

#pragma once

#if defined(__cplusplus)
extern "C"
{
#endif

#include "Eurydice.h"

#include <stdint.h>
#include <string.h>

#ifdef HACL_CAN_COMPILE_VEC256
#include "libintvector.h"
typedef struct libcrux_digest_incremental_x4_Shake128StateX4
{
  Lib_IntVector_Intrinsics_vec256* x4;
  uint64_t* st0;
  uint64_t* st1;
  uint64_t* st2;
  uint64_t* st3;
} libcrux_digest_incremental_x4_Shake128StateX4;
#else
typedef struct libcrux_digest_incremental_x4_Shake128StateX4
{
  uint64_t* st0;
  uint64_t* st1;
  uint64_t* st2;
  uint64_t* st3;
} libcrux_digest_incremental_x4_Shake128StateX4;
#endif

extern void
libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__squeeze_blocks_f(
  libcrux_digest_incremental_x4_Shake128StateX4* xof_state,
  size_t block_len,
  size_t num,
  uint8_t *output);

#define libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__squeeze_blocks( \
  block_len, num, xof_state, output, c)                                                                 \
  libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__squeeze_blocks_f(     \
    xof_state, block_len, num, (uint8_t *) output)

// The last parameter should be x1[k] but Eurydice issues a prototype that has lost the length information.
void
libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__absorb_final_(
  size_t k,
  libcrux_digest_incremental_x4_Shake128StateX4* x0,
  Eurydice_slice *x1);

#if defined(__cplusplus)
}
#endif