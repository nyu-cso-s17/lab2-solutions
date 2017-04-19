#include <assert.h>

#include "part3.h"

char part3(long x, int b)
{
#if SOL >= 999
    char c;

    if (b < 0) return 0;						// js ==> negative
    if (b >= sizeof(long) ) return 0;			// ja ==> above

    long t = x >> (b*8);

    c = (char) t;

    return c;
#else
    // TODO: Your code here.
    assert(0);
    return 0;
#endif
}