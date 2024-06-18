/* 
  This file was generated by KaRaMeL <https://github.com/FStarLang/karamel>
  KaRaMeL invocation: ../../../eurydice/eurydice --config ../../kyber-c.yaml ../libcrux_kyber.llbc
  F* version: b5cb71b8
  KaRaMeL version: 1282f04f
 */

#ifndef __libcrux_digest_H
#define __libcrux_digest_H

#if defined(__cplusplus)
extern "C" {
#endif

#include "eurydice_glue.h"
#include "libcrux_hacl_glue.h"

extern void libcrux_digest_sha3_512(Eurydice_slice x0, uint8_t x1[64U]);

extern void libcrux_digest_sha3_256(Eurydice_slice x0, uint8_t x1[32U]);

#define libcrux_digest_shake256(x_0, x_1, x_2, _ret_t) libcrux_digest_shake256_(x_0, x_1, x_2)

extern void libcrux_digest_shake256_(size_t x0, Eurydice_slice x1, uint8_t *x2);

extern libcrux_digest_incremental_x4_Shake128StateX4
libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__new(void);

#define libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__absorb_final(x_0, x_1, x_2, _ret_t) libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__absorb_final_(x_0, x_1, x_2)

extern void
libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__absorb_final_(
  size_t x0,
  libcrux_digest_incremental_x4_Shake128StateX4 *x1,
  Eurydice_slice *x2
);

extern void
libcrux_digest_incremental_x4__libcrux__digest__incremental_x4__Shake128StateX4__free_memory(
  libcrux_digest_incremental_x4_Shake128StateX4 x0
);

#if defined(__cplusplus)
}
#endif

#define __libcrux_digest_H_DEFINED
#endif