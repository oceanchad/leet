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
 * A21.
 * #define SET_BIT(reg, bit)    ((reg) |= (1 << (bit)))
 * #define CLEAR_BIT(reg, bit)  ((reg) &= ~(1 << (bit)))
 * #define INV_BIT(reg, bit)    ((reg) ^= (1 << (bit))) = TOGGLE
 * #define GET_BIT(reg, bit)    ((reg) &= (1 << (bit)))
 */

static int a1 = 1; //0x601040
int a2;

int main(){
    static int a3; //0x601048
    int a4; //0x472a5d8c

    printf("0x%x", &a2);
}