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

int func(int x)
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
    if ((n == 1)|| (n == 2))
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
     * Q4. the value of *(a+1) and *(p-1), (*p-1)?
     *
     */
    int a[] = {1, 2, 3, 4, 5};
    int *p = (int *)(&a + 1);

    /**
     * Q5. the content of array b?
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
    for (i = 0, j = 1; i < 5; ++i)
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
     * Q18.
     * 給定input:  0x2222
     * 輸出output: Yes if 每4bit一樣
     */

    unsigned int bit_chk = 0xFFFF;
    if (bit_4_chk(bit_chk))
        printf("Yes\n");
    else
        printf("No\n");

    /**
     * Q19.
     * 觀察input及output: 3 -> 32, 0 -> 32, 32 -> 64, 90 -> 96
     */
    unsigned int arr_32[] = {3, 0, 32, 90};
    for (int i = 0 ; i < sizeof(arr_32)/sizeof(arr_32[0]); i++) {
        printf(func(arr_32[i]));
    }

    /**
     * Q20.
     * 重寫 void(*(*papf)[3])(char *)
     * typedef ______;
     * pf(*papf)[3];
     */

    /**
     * Q21.
     * 寫出以下程式碼
     * set the specific bit
     * clear the specific bit
     * inverse the specific bit
     * toggle the specific bit
     * Get the specific bit
     */

    /**
     * Q22.
     * 檢查輸入是否為3的倍數，不能使用division或是mod
     *
     */

    /**
     * Q23.
     * 用bit operation寫出swap
     *
     */

    /**
     * Q24.
     * 輸入一個數字及一個array，該array長度為該數字，輸出一個數字，該數字所有子集合中總和的最大值
     * 給定input: 5, [2, -1, 4, -2, 2]
     * 給定output: 6 (因為 2,4 加總最大), [2 2 4] = [2 4]
     * max subarray sum
     */

    /**
     * Q25.
     * print出100 ~ -100，寫出兩種不同的方式
     *
     */

    /**
     * Q26.
     * 寫出一個會發生memory leak的程式
     *
     */

    /**
     * Q27.
     * 請寫一個程式會發生pointer失效但是編譯是成功的
     *
     */

    /**
     * Q28.
     * 呼叫fib(5)之後，c的值為何？
     *
     */

    /**
     * Q29.
     * 給兩個數 a b，判斷兩數是否互值
     */

    /**
     * Q30.
     * write your own strcmp
     *
     */

    /**
     * Q31.
     * 判斷一整數是偶數還是奇數
     *
     */

    /**
     * Q32.
     * *ptrA = ?
     *  int B = 2;
        void func1(int *p) {p = &B;}
        int main(){
            int A = 1, C = 3;
            int *ptrA = &A;
            func1(ptrA);
            printf("%d\n", *ptrA);
            return 0;
        }
        如果要印出2，要如何更改？
     */

    /**
     * Q33.
     * void func1(void)
        {
            static int i = 0;
            i++;
            printf("%d", i);
        }
     *  call func1 8次, output為多少？ Ans: 12345678
     */

    /**
     * Q34.
     * int a, b, c, d, i, result;
        int main(){
            // i = 1 ~ 4, a = 4
            for (i = 0, a = 0; ++i < 5; a++);
            // i = 5 ~ 2, --i = 4 ~ 1, b = 4
            for (i = 5, b = 0; --i; b++);
            // i = 0 ~ 4, c = 5, b = 0
            for (i = 0, b = 0; i++ < 5; c++);
            // i = 5 ~ 1, d = 5
            for (i = 5, d = 0; i--; d++);
            result = a * b * c * d;
            printf("%d %d %d %d %d", a, b, c, d, result);
        }
     *
     */

    /**
     * Q35.
     * char data[8] = {1, 2, 3, 4, 5, 6, 7, 8};
        short *a = (short*)&data[0];
        int b = *a;
        printf("%d", b);
     */

    /**
     * Q36.
     * int a = 320;
        char *ptr;
        ptr = (char *)&a;
        printf("%d", *ptr);
     *
     */

    /**
     * Q37.
     * static int a1 = 1; //0x601040
        int a2;

        int main(){
            static int a3; //0x601048
            int a4; //0x472a5d8c

            printf("0x%x", &a2);
        }
        What is the possible address a2 variable?
        A. 0x472a5d6c
        B. 0x60104c
        C. 0x80104c
        D. 0x601040
     *
     */

    /**
     * Q38.
     * #define SWAP(a, b) temp = a; a = b; b = temp;
        int main()
        {
            int i, j, temp;
            i = 5;
            j = 10;
            temp = 0;
            if (i > j)
                SWAP(i, j);
            printf("%d %d %d", i, j, temp);
        }
     */

    /**
     * Q39.
     * int main()
        {
            int data[6] = {1, 2, 3, 11, 22, 33};
            int *a = data;
            int *b = data + 3;
            int c = *a++ + *b++;
            int d = *++a + *++b;
            printf("%d %d", c, d);
        }
     */

    /**
     * Q40.
     * Bubble sort
     * void bubble_sort(int arr[], int n)
        {
            bool swap_value = false;
            for (int i = 0 ; i < n - 1; i++) {
                for (int j = 0 ; j < n - i - i; j++) {
                    if (arr[j] > arr[j+1]) {
                        swap_xor(&arr[j], &arr[j+1]);
                        swap_value = true;
                    }
                }
                if (swap_value == false) {
                    printf("no swap");
                    break;
                }

            }
        }
     */

    /**
     * Q41.
     * void swap_xor(int *a, int *b)
        {
            *a = *a ^ *b;
            *b = *a ^ *b; // b = a XOR b XOR b = a
            *a = *a ^ *b; // a = a XOR b XOR a = a XOR a XOR b = b
        }
     */

}
