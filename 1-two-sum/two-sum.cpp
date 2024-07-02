class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    std::unordered_map<int, int> newmap;

        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];

            if (newmap.find(complement) != newmap.end()) {
                return { newmap[complement], i };
            }

            newmap[nums[i]] = i;
        }

        return {};
    }
};