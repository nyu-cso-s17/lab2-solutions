#if SOL >= 999
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "panic_cond.h"
#include "part5.h"

extern long part5();

int main(int argc, char **argv)
{
    int p5 = 1;

    long p5_result = part5(10);
    if (p5_result != 72 ) { 
        p5 = 0;
    } 

    p5_result = part5(12);
    if (p5_result != 110 ) { 
        p5 = 0;
    }

    if (p5)
        printf("part5: OK\n");
    else
        panic_cond(0, "part5 failed to perform the correct logic.");

    return 0;
}
#endif
