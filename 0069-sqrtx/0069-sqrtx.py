class Solution:
    def mySqrt(self, x: int) -> int:
        lo = 0
        hi = x
        res = 0
        while lo <= hi:
            m = lo + ((hi - lo) // 2)
            if m ** 2 > x:
                hi = m - 1
            elif m ** 2 < x:
                lo = m + 1
                res = m
            else:
                return m
        return res
            
