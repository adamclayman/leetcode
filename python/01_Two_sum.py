class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        if nums is None:
            return []
        
        values = {}
        for index, number in enumerate(nums):
            if target - number in values:
                return [values[target-number], index]
            values[number] = index