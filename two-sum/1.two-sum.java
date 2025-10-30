
class Solution {

    public int[] twoSum(int[] nums, int target) {

        Map<Integer, Integer> result = new HashMap<>();

        for (int i = 0; i < nums.length; i++) {
            int goal = target - nums[i];

            if (result.containsKey(goal)) {
                return new int[]{result.get(goal), i};
            }
            result.put(nums[i], i);
        }

        return new int[]{};
    }
}
