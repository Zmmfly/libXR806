#include "build.h"
#include "LL_base.h"

tufn(ll_reg_edit_1)
{
    bool ret = false;
    uint32_t reg = 0xffffffff;
    LL_reg_edit(&reg, 23, 16, 0x55aa);

    ret = (reg == 0xffaaffff);
    if (!ret) printf("Reg: %08x, want: %08x\n", reg, 0xffaaffff);
    return ret;
}

tufn(ll_reg_edit_2)
{
    bool ret = false;
    uint32_t reg = 0xfffffffe;
    LL_reg_edit(&reg, 0, 0, 0x1);

    ret = (reg == 0xffffffff);
    if (!ret) printf("Reg: %08x, want: %08x\n", reg, 0xffffffff);
    return ret;
}
