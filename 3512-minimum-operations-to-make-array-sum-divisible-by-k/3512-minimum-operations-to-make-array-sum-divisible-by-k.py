class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        summ = 0
        for i in range(len(nums)):
            summ += nums[i]
        operations = 0
        while summ % k != 0:
            operations += 1
            summ = summ - 1
        return operations
