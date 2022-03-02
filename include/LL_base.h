#ifndef __LL_BASE_H__
#define __LL_BASE_H__

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include "LL_config.h"

#define LL_bit(n) (1U << (n))

bool LL_reg_edit(uint32_t *reg, uint32_t h_pos, uint32_t l_pos, uint32_t value);

#endif