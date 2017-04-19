#include <assert.h>

#include "part1.h"

long part1(long x, long y)
{
#if SOL >= 999
    if ( x > y )
    {
        return x;
    }
    else
    {
        return y;
    }
#else
    // TODO: Your code here.
    assert(0);
    return 0;
#endif
}