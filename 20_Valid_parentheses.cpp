class Solution {
public:
    bool isValid(string s) {
        stack<char> charstack;
        for(char c : s) {
            if (c == '(') {
                charstack.push(')');
            } else if (c == '[') {
                charstack.push(']');
            } else if (c == '{') {
                charstack.push('}');
            } else if (c == ')' || c == ']' || c == '}') {
                if (charstack.empty()) {
                    return false;
                }
                else if (c == charstack.top()) {
                    charstack.pop();
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
        if (charstack.empty()) {
            return true;
        } else {
            return false;
        }
              
    }
};