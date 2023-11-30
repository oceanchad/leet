/**
 * @file c_test_ans.c
 * @author your name (you@domain.com)
 * @brief ans for c_test
 * @version 0.1
 * @date 2023-11-09
 *
 * @copyright Copyright (c) 2023
 *
 */

#include "c_test_imp.h"
#include <stdbool.h>
/**
 * A1. MUX(a, b) 10+5 *10-5 = 10 + 50 - 5 = 55
 *
 */

/**
 * A6. 4 + 6 + 5 = 16
 *
 */

/**
 * A2. 0x00001313
 * ~v2 = 0xffffedfd -> e d f d -> 1110 1101 1111 1101
 * v = v1 & (~v2) = 0x111 -> 只要~v2 最低4個值都是奇數 就會都是1
 * v = 0x111 | 0x1202 = 1313
 */

/**
 * A3. return x > 0 && (x & x - 1) == 0;
 *
 */

/**
 * A4. *(a+1)的值 = 2, *(p-1)的值 = 5
 *
 */

/**
 * A5.  b = {129, 7, 131, 9, 10}
 *
 */

/**
 * A7. j = 33
 * 注意 define中的 x+=1 沒有';'
 */

/**
 * A8. ques1 = 25 + 30 = 55
 *     ques2 = 27 + 32 = 59
 */

/**
 * A9.
 *
 *
 */

/**
 * A13.
 * struct ABC *a = NULL;
    a++;
    printf("%u", a);
    return 0;
 *
 */


/**
 * A21.
 * #define SET_BIT(reg, bit)    ((reg) |= (1 << (bit)))
 * #define CLEAR_BIT(reg, bit)  ((reg) &= ~(1 << (bit)))
 * #define INV_BIT(reg, bit)    ((reg) ^= (1 << (bit))) = TOGGLE
 * #define GET_BIT(reg, bit)    ((reg) &= (1 << (bit)))
 */
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}



void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        printf("%d, ", arr[i]);
}
void insert_sort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j+1] = key;
    }
}

#include <stdio.h>

int fun(int a, int *b){
    static int c = 0;
    a += *b; // a = 24 + 12 = 36
    *b = a; // y = 36
    c += a + *b; // c = 36 + 36 + 24
    printf("%d %d %d", a, *b, c);
    return c;
}

int main(){
    int arr[] = {1, 2, 3, 4};
    int *p = &arr + 1;
    int *q = &arr+1;
    int *r = &arr[0] + 1;
    printf("%p %p %p", p, q, r);
    // int x, y, z, sum;
    // x = 5;
    // y = 7;
    // x = fun(x, &y); // x = 24
    // z = fun(x, &y); // x =24, y = 12
    // sum = x + y + z;
    // printf("%d", z);
}