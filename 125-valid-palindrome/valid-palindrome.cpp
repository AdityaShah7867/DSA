class Solution {
public:
    bool isPalindrome(string s) {
        string proper;
        if (s.size() <= 1) return true;

        for (char c : s) {
            if (isalnum(c)) {
                proper += tolower(c); 
            }
        }

    
        int n = proper.size();
        for (int i = 0; i < n / 2; i++) {
            if (proper[i] != proper[n - 1 - i]) {
                return false; 
            }
        }
        
        return true; 
    }
};