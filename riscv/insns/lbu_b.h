reg_t addr = RS1 + insn.i_imm();
CHECK_BND(addr, insn.rs1());
WRITE_RD(MMU.load_uint8(addr));
