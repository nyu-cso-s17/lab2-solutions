#if SOL >= 999
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "panic_cond.h"
#include "part1.h"

extern long part1(long x, long y);

int main(int argc, char **argv)
{
    int p1 = 1;

    if (part1(10, 12) != 12) p1 = 0;
    if (part1(12, 10) != 12) p1 = 0;
    if (part1(-12, 12) != 12) p1 = 0;
    if (part1(12, -12) != 12) p1 = 0;
    if (part1(-10, -12) != -10) p1 = 0;
    if (part1(-12, -10) != -10) p1 = 0;

    if (p1)
        printf("part1: OK\n");
    else
        panic_cond(0, "part1 failed to perform the correct logic.");

    return 0;
}
#endif
