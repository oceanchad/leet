class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
        ans = 0
        for i in range(len(s)):
            if(roman[s[i]]):    #pick up index
                temp = roman[s[i]]
                if(i != 0 and roman[s[i-1]] < roman[s[i]]):
                    temp = temp - (roman[s[i-1]]) * 2
                ans = ans + temp
        return ans