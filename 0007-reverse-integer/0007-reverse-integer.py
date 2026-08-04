class Solution:
    def reverse(self, x: int) -> int:
        is_negative = x < 0 
        x = abs(x)
        revNum = 0
        while x > 0:
            revNum = revNum * 10 + x % 10
            x //= 10
        if is_negative:
            revNum = -revNum
        if revNum < -2 ** 31 or revNum > 2 ** 31 - 1:
            return 0 
        return revNum