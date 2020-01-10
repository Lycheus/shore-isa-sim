WRITE_BREG(2 * insn.rd(), MMU.load_uint64(RS1 + insn.i_imm()));
