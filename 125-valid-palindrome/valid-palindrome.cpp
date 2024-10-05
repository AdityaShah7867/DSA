class Solution {

private:
    bool isValid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ||
            (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char toLower(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool palindrome(string s) {
        int st = 0;
        int e = s.length() - 1;

        while (st < e) {
            if (s[st] != s[e]) {
                return false;
            } else {
                st++;
                e--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {

        string temp = "";
        for (int i = 0; i < s.length(); i++) {
            if (isValid(s[i])) {
                temp.push_back(s[i]);
            }
        }

        for (int i = 0; i < temp.length(); i++) {
            temp[i] = toLower(temp[i]);
        }

        return palindrome(temp);
    }
};