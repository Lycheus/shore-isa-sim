WRITE_BREG(2 * insn.rd() + 1, MMU.load_uint64(RS1 + insn.i_imm() + 8));
