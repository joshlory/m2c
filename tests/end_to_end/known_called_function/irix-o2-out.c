void test(s32 x, short *y, s32 z, char *r, int *arg5) {
    int *phi_s0;

    phi_s0 = NULL;
loop_1:
    phi_s0 = foo(phi_s0, y, arg5);
    goto loop_1;
}
