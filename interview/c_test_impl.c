#include "c_test_imp.h"

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

int isPowerOf2(int x)
{
    return x > 0 && (x & x - 1) == 0;
}

void printTri(void)
{
    for (int i = 0; i < 5; i++) { // height
        int print = 1, plus = 1;
        for (int j = 0; j < 9; j++) { // width
            if (abs(4 - j) <= i) {
                printf("%d", print);
                print += plus;
            } else {
                printf(" ");
            }
            if (j == 3) // mid
                plus = -1;
        }
        printf("\n");
    }
}
// 011 -> odd pos : 1, even pos : 1 -> 1 - 1 = 0, isMultipleOf3
// 1001
// 10111 (23) -> odd pos : 3, even pos : 1
int q22(unsigned int n){
    if (n == 0 || n == 3)
        return 1;
    if (n < 3)
        return 0;
    n = (n >> 2) + (n & 3); // n = (1001 >> 2) + 1001 & 011 =
    return (q22(n));
}

int isPrime(int n) {
    int flag = 1;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            flag = 0;
            break;
        }
    }
    if (!flag)
        return 0;
    return 1;
}