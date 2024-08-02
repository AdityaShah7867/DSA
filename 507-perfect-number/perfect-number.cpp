class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false; 
        int s =sqrt(num);
        int sum=1;
        for(int i=2;i<=s;i++){
            if(num%i==0){
                sum=sum+i;
                if (i != num / i) {
                    sum += num / i;
                }
            }
        }
        if(sum == num){
            return true;
        }
        else{
            return false;
        }
    }
};