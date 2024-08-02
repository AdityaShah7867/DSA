class Solution {
public:
    bool isPalindrome(int x) {
        int rev=0;
        int og=x;
        while(x>0){

            int ld = x%10;
            if (rev > (INT_MAX - ld) / 10) {
                return 0; 
            }
            rev = rev*10 + ld;
            x=x/10;
        }

        if(rev==og){
            return true;
        }
        else{
            return false;
        }
    }
};