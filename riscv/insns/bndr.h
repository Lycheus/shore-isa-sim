WRITE_BREG(2*insn.rd(),   RS1);
WRITE_BREG(2*insn.rd()+1, RS2);

reg_t base = STATE.BPR[2*insn.rd()];
reg_t bound = STATE.BPR[2*insn.rd()+1];
reg_t ptr = RD;

//printf("%08X: BNDR: base: %lx,\t bound: %lx,\t ptr: %lx\n", pc, base, bound, ptr), 

const char* regname[] = {   "zero", "ra", "sp",  "gp",  "tp", "t0",  "t1",  "t2",
			    "s0",   "s1", "a0",  "a1",  "a2", "a3",  "a4",  "a5",
			    "a6",   "a7", "s2",  "s3",  "s4", "s5",  "s6",  "s7",
			    "s8",   "s9", "s10", "s11", "t3", "t4",  "t5",  "t6"
};
int k_rd = insn.rd();
int k_rs1 = insn.rs1();
int k_rs2 = insn.rs2();
printf("%08lX: BNDR\t%3s [%16lx],       %3s  [%16lx], \t%3s [%16lx]\n", pc, regname[k_rd], ptr, regname[k_rs1], base, regname[k_rs2], bound);
