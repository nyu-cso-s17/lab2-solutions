#include <assert.h>

#include "part2.h"

long part2(long x, long y)
{
#if SOL >= 999
    x = x * 48;
    z = y + 31;

    if (y >= 0) {							// movns ==> move if non-negative
    	z = y;
    }
    z /= 32;

    long t3 = x & z;

    return t3;
#else
    // TODO: Your code here.
    assert(0);
    return 0;
#endif
}