#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

#include "part1.h"
#include "part2.h"
#include "part3.h"
#include "part4.h"
#include "part5.h"

// Dummy main.c for creating cleaner executable

int main ( )
{
    // Part 1
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
        printf("part1 failed to perform the correct logic.");

    // Part 2
    int p2 = 1;

    long a = 5;
    long b = -10;
    long c = (a*48) & (b/32);
    if(part2(a, b) != c) p2 = 0;

    if (p2)
        printf("part2: OK\n");
    else
        printf("part2 failed to perform the correct logic.");

    // Part 3
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
        printf("part3 failed to perform the correct logic.");

    // Part 4
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
        printf("part4 failed to perform the correct logic.");

    // Part 5
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
        printf("part5 failed to perform the correct logic.");
   
    return 0;
}
