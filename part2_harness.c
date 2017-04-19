#if SOL >= 999
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "panic_cond.h"
#include "part2.h"

extern long part2(long x, long y);

int main(int argc, char **argv)
{
    int p2 = 1;

    long a = 5;
    long b = -10;
    long c = (a*48) & (b/32);
    if(part2(a, b) != c) p2 = 0;

    if (p2)
        printf("part2: OK\n");
    else
        panic_cond(0, "part2 failed to perform the correct logic.");

    return 0;
}
#endif
