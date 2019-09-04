class Solution {
public:
    bool isValid(string s) {
        stack<char> charstack;
        for(int i = 0; i < s.size(); i++) {
            switch(s.at(i)) {
                case '(': charstack.push(')');
                    break;
                case '{': charstack.push('}');
                    break;
                case '[': charstack.push(']');
                    break;
                case ')':
                    if(charstack.top() == ')') {
                        charstack.pop();
                    } else return false;
                case '}':
                    if(charstack.top() == '}') {
                        charstack.pop();
                    } else return false;
                case ']':
                    if(charstack.top() == ']') {
                        charstack.pop();
                    } else return false;
                        
            }
        }
        return true;
    }
};