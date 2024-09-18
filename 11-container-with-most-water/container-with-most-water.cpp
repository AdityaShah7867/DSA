class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0;
        int right = n-1;
        int maxi=0;
        while(left<right){
            int l=height[left];
            int r=height[right];
            int area = min(l,r) * (right-left);
            maxi = max(maxi,area);

            if(l<r){
                left++;
            }
            else{
                right--;
            }
        }
        return maxi;
    }
};