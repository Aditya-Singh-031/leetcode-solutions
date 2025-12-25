class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x=str(x) 
        for i in range(0,(len(x)+1)/2):
            if x[i]== x[-i-1]:
                pass
            else : 
                return False
        return True
            