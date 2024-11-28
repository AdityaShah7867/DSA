class Solution {
public:
    bool isValid(string s) {
        stack<char> stack; // empty stack created
        for (int i = 0; i < s.size(); i++) {

            if (s[i] == '(' || s[i] == '{' || s[i] == '[') { // check for opening brackets
                stack.push(s[i]); // push opneing brackets into stack
            } else {
                if (stack.empty()) {
                    return false; // return false when u have closing bracket in string but not in stack
                }

                char top = stack.top(); // get top most element frm stack
                if (
                    (s[i] == ')' && top != '(') ||
                    (s[i] == ']' && top !='[')||
                    (s[i]=='}' && top !='{')
                ){
                    return false;
                }
                else{
                    stack.pop();
                }
            }
        }
        return stack.empty();
    }
};