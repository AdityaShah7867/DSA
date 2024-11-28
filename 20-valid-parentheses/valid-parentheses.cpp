class Solution {
public:
    bool isValid(string s) {
        stack<char> stack; // initialize new empty stack;

        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            } else {
                if (stack.empty()) {
                    return false; // if we have closing bracket but no opening bracket in stack
                } else {
                    char t = stack.top();

                    if (s[i] == ')' && t != '(' || s[i] == ']' && t != '[' ||
                        s[i] == '}' && t != '{' ) {
                        return false;
                    }
                    else{
                        stack.pop();
                    }
                }
            }
        }
        return stack.empty();
    }
};