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
#define MUX(a, b) a *b

/**
 * @brief Q6.fun(456) + fun(123) + fun(789) = ?
 *
 * @return int
 */

int fun(int x)
{
    int count = 0;
    while (x)
    {
        count++;
        x = x & (x - 1);
    }
    return count;
}

#define INC(x) \
    x *= 2;    \
    x += 1

int c = 0;

int fib(int n){
    c++;
    if ((n==1)|| (n==2))
        return 1;
    return (fib(n-1)+fib(n-2));
}

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
    int *p = (int *)(&a + 1);

    /**
     * Q5. the content of array a?
     *
     */

    int b[] = {6, 7, 8, 9, 10};
    int *p1 = b;
    *(p1++) += 123;
    *(++p1) += 123;

    /**
     * Q7. The value of J
     *
     */
    int i, j;
    for (i = 0, j = 1; i < 5; i++)
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
     * Q10. Given str = [substr1 substr2 ... substr6] There is a space between substr#
     * How to print the #4 string ?
     */

    /**
     * Q11. What is the "?" means in the C programming ?
     *
     */

    /**
     * Q12. Explain the following Linux command.
     * 1. chmod
     * 2. who
     * 3. which
     * 4. echo
     *
     */

    /**
     * Q13. 不使用sizeof情況下，計算下方struct大小
     *
     */
    struct ABC
    {
        int a;
        float b;
        char c;
    };

    /**
     * Q14. 給定一個陣列 1 ~ 100，計算範圍內為質數的數量
     *
     */
    int prime_count = 0;
    for (int i = 1; i <= 100; i++) {
        if (isPrime(i)) {
            prime_count++;
        }
    }
    printf("total prime number is %d", prime_count);

    /**
     * Q15.
     * 給定input  0b1110_0001_0101_1101_1100_0101_0100_0011
     * 輸出output 0b1100_0010_1010_0011_1011_1010_1000_0111
     */

    unsigned int data = 0xE15DC543;
    printf("%X", bit_reverse(data));

    /**
     * Q16.
     * 給定input:  number
     * 輸出output: log2(number)
     */

    unsigned int num = 512;
    printf("%d\n", log2(num));

    /**
     * Q17.
     * 給定input: array and number
     * 輸出output: number是否在array
     */

    int arr[] = {2, 3, 4, 10, 40};
    int target = 10;
    int arr_len = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, arr_len - 1, target);
    if (result == -1) {
        printf("Target is not in array");
    } else {
        printf("Target is present at index");
    }

    /**
     * Q17.
     * 給定input:  0x2222
     * 輸出output: Yes if 每4bit一樣
     */

    unsigned int bit_chk = 0xFFFF;
    if (bit_4_chk(bit_chk))
        printf("Yes\n");
    else
        printf("No\n");

    /**
     * Q18.
     * 觀察input及output: 3 -> 32, 0 -> 32, 32 -> 64, 90 -> 96
     */
    unsigned int arr_32[] = {3, 0, 32, 90};
    for (int i = 0 ; i < sizeof(arr_32)/sizeof(arr_32[0]); i++) {
        printf(func(arr_32[i]));
    }

    /**
     * Q19.
     * 重寫 void(*(*papf)[3])(char *)
     * typedef ______;
     * pf(*papf)[3];
     */

    /**
     * Q20.
     * 寫出以下程式碼
     * set the specific bit
     * clear the specific bit
     * inverse the specific bit
     * toggle the specific bit
     * Get the specific bit
     */

    /**
     * Q21.
     * 檢查輸入是否為3的倍數，不能使用division或是mod
     *
     */

    /**
     * Q22.
     * 用bit operation寫出swap
     *
     */

    /**
     * Q23.
     * 輸入一個數字及一個array，該array長度為該數字，輸出一個數字，該數字所有子集合中總和的最大值
     * 給定input: 5, [2, -1, 4, -2, 2]
     * 給定output: 6 (因為 2,4 加總最大), [2 2 4] = [2 4]
     * max subarray sum
     */

    /**
     * Q24.
     * print出100 ~ -100，寫出兩種不同的方式
     *
     */

    /**
     * Q25.
     * 寫出一個會發生memory leak的程式
     *
     */

    /**
     * Q26.
     * 請寫一個程式會發生pointer失效但是編譯是成功的
     *
     */

    /**
     * Q27.
     * 呼叫fib(5)之後，c的值為何？
     *
     */

    /**
     * Q28.
     * 給兩個數 a b，判斷兩數是否互值
     */

    /**
     * Q29.
     * write your own strcmp
     *
     */

    /**
     * Q30.
     * 判斷一整數是偶數還是奇數
     *
     */

}
