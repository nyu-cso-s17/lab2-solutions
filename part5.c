#include <assert.h>

#include <stdlib.h>

#include "part5.h"

long bar(long * a, int size) {
#if SOL >= 999
    long sum = 0;
    long product = 1;

    int i;
    for (i = 0; i < size-1; i++ )
    {
        sum = sum + a[i];
        product = product * a[i];
    }

    return product + sum;
#else
    // TODO: Your code here.
    assert(0);
    return 0;
#endif
}

long part5(int size)
{
#if SOL >= 999
    long sum;
    long array[size];

    int i = 0;
    for (i = 0; i < size; i++)
    {
        array[i] = (long)(i << 1);
    }

    sum = bar(array, size);

    return sum;
#else
    // TODO: Your code here.
    assert(0);
    return 0;
#endif
}