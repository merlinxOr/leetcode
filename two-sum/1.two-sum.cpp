class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> hashMap;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++)
        {
            int goal = target - nums[i];

            if (hashMap.find(goal) != hashMap.end())
            {
                result.push_back(hashMap[goal]);
                result.push_back(i);
                return result;
            }

            hashMap[nums[i]] = i;
        }

        return result;
    }
};