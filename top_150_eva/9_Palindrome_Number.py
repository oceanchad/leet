class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0:
            return False

        reversed_num = int(str(abs(x))[::-1])
        if(x == reversed_num):
            return True