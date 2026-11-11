class Solution:
    def divideArray(self, nums: List[int]) -> bool:
        hm = {}
        for i in range(len(nums)):
            if nums[i] not in hm:
                hm[nums[i]] = 0
            hm[nums[i]]+=1
        for key in hm:
            if hm[key]%2 != 0:
                return False
        return True

