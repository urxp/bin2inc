#include"bin2inc.h"

boolean op_38(void){

    operand_size = 8;

    address_mode = read_byte();

    sprintf(ibuffer, iFORMAT"%s, %s", "cmp", mod_rm(), mod_reg());

    mark_instruction();
    // push next instruction offset to stack
    IDisasm.pushAddress(&current_va);

    return boolean(1);
}