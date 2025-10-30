
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}

        for i, value in enumerate(nums):
            goal = target - value

            if goal in hashmap:
                return [hashmap[goal], i]
            hashmap[value] = i
