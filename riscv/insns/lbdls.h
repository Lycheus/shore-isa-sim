//WRITE_BREG(2 * insn.rd(), MMU.load_uint64(RS1 + insn.i_imm()));
reg_t base = p->get_csr(CSR_UBOUNDS) & ~(1UL << 63);
reg_t addr = RS1 + insn.i_imm();
reg_t shadow_addr = base + 2 * addr;
reg_t bound = MMU.load_uint64(shadow_addr);
WRITE_BREG(2 * insn.rd(), MMU.load_uint64(shadow_addr)); //load from shadow memory to bound shadow register
//WRITE_RD(MMU.load_uint64(shadow_addr)); //REVISION to load from shadow memory to physical register instead shadow register

printf("LBDLS: base: %lx, \t read from\t shadow_addr: %lx\n", bound, shadow_addr);
