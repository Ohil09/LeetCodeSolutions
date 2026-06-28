class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        nums.sort()
        i = 0
        while(i < len(nums) and nums[i] != val):
            i+=1
        if(i == len(nums)):
            return i
        j = i
        while(j < len(nums) and nums[j] == val):
            j+=1
        if(j == len(nums)):
            return i
        while(j < len(nums)):
            nums[i] = nums[j]
            i+=1
            j+=1
        return i
