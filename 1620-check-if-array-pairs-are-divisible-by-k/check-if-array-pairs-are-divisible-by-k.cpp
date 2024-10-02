class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        vector<int> remainderCount(k, 0);

        // Step 1: Count the frequency of each remainder when divided by k
        for (int num : arr) {
            int mod = ((num % k) + k) % k; // Handle negative numbers
            remainderCount[mod]++;
        }

        // Step 2: Check for valid pairs
        for (int i = 1; i < k; ++i) {
            if (remainderCount[i] != remainderCount[k - i]) {
                return false;
            }
        }

        // Special case for numbers divisible by k
        // They must be paired among themselves (i.e., count should be even)
        return remainderCount[0] % 2 == 0;
    }
};
