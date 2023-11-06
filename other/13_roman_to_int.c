#include <string.h>

int helper(char c)
{
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
    }
    return 0;
}

int romanToInt(char* s) {
    int len = strlen(s), val = 0;
    for (int i = 0; i < len-1; i++) {
        if (helper(s[i]) >= helper(s[i+1]))
            val += helper(s[i]);
        else
            val -= helper(s[i]);
    }
    return val += helper(s[len-1]);
}