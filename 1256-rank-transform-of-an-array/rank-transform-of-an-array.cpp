class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // Step 1: Copy the array and sort the unique elements
        vector<int> sortedArr = arr;
        sort(sortedArr.begin(), sortedArr.end());
        sortedArr.erase(unique(sortedArr.begin(), sortedArr.end()), sortedArr.end());

        // Step 2: Create a map to store the rank of each element
        unordered_map<int, int> rankMap;
        for (int i = 0; i < sortedArr.size(); ++i) {
            rankMap[sortedArr[i]] = i + 1;
        }

        // Step 3: Replace elements in the original array with their ranks
        vector<int> result(arr.size());
        for (int i = 0; i < arr.size(); ++i) {
            result[i] = rankMap[arr[i]];
        }

        return result;
    }
};