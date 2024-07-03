class Solution {
public:
    int search(vector<int>& nums, int target) {

        int n=nums.size();
        int lo=0;
        int hi=n;



        for(int i=0; i<nums.size();i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
    }
};