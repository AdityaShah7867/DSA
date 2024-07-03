class Solution {
public:
    int findMin(vector<int>& nums) {
        int big=nums[0];

        for(int i=0; i<nums.size();i++){
            big = min(big,nums[i]);
        }
        return big;
    }
};