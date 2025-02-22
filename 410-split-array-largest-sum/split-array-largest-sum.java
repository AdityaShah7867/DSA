class Solution {
    public int splitArray(int[] nums, int k) {
        int n = nums.length ; 
        int low = getMax(nums); 
        int high = getSum(nums);

        while ( low < high ){
             int mid = low + (high - low) / 2;
            if (canSplit(nums, k, mid)) {
                    high = mid; 
            }else {
                low = mid + 1; 
            }

        }
                return low; 

    }
    private boolean canSplit (int[] nums, int k, int maxSum){
            int subarrays = 1, currentSum = 0;
            for (int num : nums) {
                if(currentSum + num > maxSum){
                    subarrays ++ ;
                    currentSum = num;
                    if(subarrays > k){
                        return false ; 
                    }


                }
                    else {
                        currentSum += num;
                    }
            }
                    return true ; 

    }
    private int getMax(int[] nums) {
        int max = 0;
        for (int num : nums) {
            max = Math.max(max, num);
        }
        return max;
    }

    private int getSum(int[] nums) {
        int sum = 0;
        for (int num : nums) {
            sum += num;
        }
        return sum;
    }
}