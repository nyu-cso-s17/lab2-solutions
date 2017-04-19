#include <assert.h>

#include "part4.h"

long foo(long* p, long val)
{
#if SOL >= 999
    long x = *p;
    *p = *p + val;

    return x;
#else
    // TODO: Your code here.
    assert(0);
    return 0;
#endif
}

long part4(long* array, int size) {
#if SOL >= 999
    long s = 0;

    int i;
    for(i = 0; i < size; i++)
    {
        s = s + foo(&array[i], 2);
    }

    return s;
#else
    // TODO: Your code here.
    assert(0);
    return 0;
#endif
}