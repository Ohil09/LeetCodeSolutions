class Solution(object):
    def countDigits(self, num):
        s = str(num)
        count = 0
        for val in s:
            if num % int(val) == 0:
                count += 1
        return count
        