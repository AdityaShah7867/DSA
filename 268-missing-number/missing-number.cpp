class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int N = nums.size();
        vector<int> hash(N + 1, 0);  // Initialize a vector with size N + 1, all values set to 0

        // Fill the hash vector based on the input array
        for (int i = 0; i < N; i++) {
            hash[nums[i]]++;
        }

        // Find the missing number by checking which index has a count of 0
        for (int i = 0; i <= N; i++) {
            if (hash[i] == 0) {
                return i;
            }
        }

        return -1; // In case no number is missing, though this should not occur with valid input
    }
};
