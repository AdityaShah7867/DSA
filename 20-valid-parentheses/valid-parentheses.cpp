class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;

        for (int i=0; i<s.size(); i++){
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                stack.push(s[i]);
            }
            else{
                if(stack.empty()){
                    return false;
                }
                else{
                    char topp = stack.top();
                    if(s[i] == ')' && topp != '(' || s[i] == ']' && topp != '[' || s[i] == '}' && topp != '{' ){
                        return false;
                    }
                    stack.pop();
                }
            }
        }
        return stack.empty();
        
    }
};