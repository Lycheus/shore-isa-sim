WRITE_BREG(2*insn.rd(),   RS1);
WRITE_BREG(2*insn.rd()+1, RS2);

reg_t base = STATE.BPR[2*insn.rd()];
reg_t bound = STATE.BPR[2*insn.rd()+1];
reg_t ptr = RD;

printf("%08X: BNDR: base: %lx,\t bound: %lx,\t ptr: %lx\n", pc, base, bound, ptr), 
