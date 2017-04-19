#if SOL >= 999
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "panic_cond.h"
#include "part4.h"

extern long foo(long* p, long val);
extern long part4(long* array, int size);

int main(int argc, char **argv)
{
    int p4 = 1;

    long nums [] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    long sum = 0;

    sum = part4(nums, size);
    if(sum != 55) p4 = 0;

    int i;
    for(i = 0; i < size; i++)
    {
      if(nums[i] != i+3 ) p4 = 0;
    }

    if (p4)
        printf("part4: OK\n");
    else
        panic_cond(0, "part4 failed to perform the correct logic.");

    return 0;
}
#endif
