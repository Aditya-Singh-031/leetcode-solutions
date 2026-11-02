class Solution:
    def isPalindrome(self, x: int) -> bool:
        
        if x <= (-2)**31 or x >= 2**31 -1 :
            return False
        
        x = str(x)
        for i in range(len(x)):
            if x[i] == x[-1-i]:
                pass
            else :
                return False
        return True