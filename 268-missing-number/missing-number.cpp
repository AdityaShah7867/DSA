class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        // To find the missing number, check if all numbers from 0 to N are present
        for (int i = 0; i <= N; i++) {
            bool found = false;
            // Search the element using linear search
            for (int j = 0; j < N; j++) {
                if (nums[j] == i) {
                    found = true;
                    break;
                }
            }
            // Check if the element is missing
            if (!found)
                return i;
        }
        // Return -1 as a fallback in case no number is missing, but theoretically, this should not happen
        return -1;
    }
};
