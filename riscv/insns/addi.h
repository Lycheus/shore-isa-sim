WRITE_RD(sext_xlen(RS1 + insn.i_imm()));
PROP_BREG(2 * insn.rd(), STATE.BPR[2 * insn.rs1()]);
PROP_BREG(2 * insn.rd() + 1, STATE.BPR[2 * insn.rs1() + 1]);
