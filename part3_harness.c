#if SOL >= 999
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "panic_cond.h"
#include "part3.h"

extern char part3(long x, int y);

int main(int argc, char **argv)
{
    int p3 = 1;

    char s[]  = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h' };
    long* l = (long*) (&s);

    if (part3( *l, -10 ) != 0)  p3 = 0;
    if (part3( *l, -1 ) != 0)  p3 = 0;
    if (part3( *l, 0 ) != 'a')  p3 = 0;
    if (part3( *l, 1 ) != 'b')  p3 = 0;
    if (part3( *l, 2 ) != 'c')  p3 = 0;
    if (part3( *l, 3 ) != 'd')  p3 = 0;
    if (part3( *l, 4 ) != 'e')  p3 = 0;
    if (part3( *l, 5 ) != 'f')  p3 = 0;
    if (part3( *l, 6 ) != 'g')  p3 = 0;
    if (part3( *l, 7 ) != 'h')  p3 = 0;
    if (part3( *l, 8 ) != 0)  p3 = 0;
    if (part3( *l, 15 ) != 0)  p3 = 0;

    if (p3)
        printf("part3: OK\n");
    else
        panic_cond(0, "part3 failed to perform the correct logic.");

    return 0;
}
#endif
