#include "LL_base.h"

bool LL_reg_edit(uint32_t *reg, uint32_t h_pos, uint32_t l_pos, uint32_t value)
{
    if (reg == NULL) return false;
    uint32_t mask = (0xffffffff << l_pos) & (0xffffffff >> (31 - h_pos));
    uint32_t tmp = *reg & ~mask;
    *reg = tmp | ((value << l_pos) & mask);
    return true;
}