/*
 * bpf.c
 */

#include "bpf.h"

/*
 * The following function is a dummy one; replace it for
 * your C function definitions.
 */

ScmObj test_bpf(void)
{
    return SCM_MAKE_STR("bpf is working");
}

/*
 * Module initialization function.
 */
extern void Scm_Init_bpflib(ScmModule*);

void Scm_Init_bpf(void)
{
    ScmModule *mod;

    /* Register this DSO to Gauche */
    SCM_INIT_EXTENSION(bpf);

    /* Create the module if it doesn't exist yet. */
    mod = SCM_MODULE(SCM_FIND_MODULE("bpf", TRUE));

    /* Register stub-generated procedures */
    Scm_Init_bpflib(mod);
}
