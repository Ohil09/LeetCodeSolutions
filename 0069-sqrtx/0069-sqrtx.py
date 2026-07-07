class Solution:
    def mySqrt(self, x: int) -> int:
        if x < 2:
            return x
        i = 1
        prev = 0
        while i * i <= x:
            prev = i
            i+=1
        return prev
            
