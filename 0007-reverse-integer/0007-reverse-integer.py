class Solution:
    def reverse(self, x: int) -> int:
        
        len_int = len(str(x))
        y = str(x)
        if y[0] =='-':
            z='-'
            for i in range(len_int-1,0,-1):
                z = z + y[i]
        else:
            z=''
            for i in range(len_int-1,-1,-1):
                z = z + y[i]

        x = int(z)
        if x < -(2**31) or x > (2**31 - 1):
            return 0
        else : 
            return x