/**
 * @file interview.c
 * @author your name (you@domain.com)
 * @brief
 * @version 0.1
 * @date 2023-11-09
 *
 * @copyright Copyright (c) 2023
 *
 */
#include <stdlib.h>
#include <stdio.h>
typedef unsigned long UL;
/**
 * Q1. MUX(10+5, 10-5) = ?
 *
 */
#define MUX(a, b) a*b

/**
 * @brief Q6.fun(456) + fun(123) + fun(789) = ?
 *
 * @return int
 */

int fun(int x)
{
    int count = 0;
    while (x) {
        count++;
        x = x & (x - 1);
    }
    return count;
}


#define INC(x) x*=2; x+=1


int main()
{
    /**
     * Q2. the value of v?
     *
     */
    UL v1 = 0x00001111;
    UL v2 = 0x00001202;
    UL v;
    v = v1 & (~v2);
    v = v | v2;

    /**
     * Q3. writing a code to justify if a given number is power of 2
     *
     */


    /**
     * Q4. the value of *(a+1) and *(p-1)?
     *
     */
    int a[] = {1, 2, 3, 4, 5};
    int *p = (int *)(&a+1);

    /**
     * Q5. the content of array a?
     *
     */

    int b[] = {6, 7, 8, 9, 10};
    int *p1 = b;
    *(p1++)+=123;
    *(++p1)+=123;

    /**
     * Q7. The value of J
     *
     */
    int i, j;
    for (i = 0, j = 1; i < 5;i++)
    INC(j);

    /**
     * Q8. ques1, ques2 value
     *
     */
    int a1 = 25;
    int b1 = 30;
    int ques1 = a1++ + b1++;
    int ques2 = ++a1 + ++b1;

    /**
     * Q9. Write a code to output the following pattern ?
     *      1
     *     121
     *    12321
     *   1234321
     *  123454321
     */

    /**
     * Q10. 
     *
     */

}

