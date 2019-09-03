class Solution {
public:
    vector<string> strList;
    map<char, string> strMap = {
        {'2',"abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"},
    };
    
    vector<string> letterCombinations(string digits) {
        if (digits != "") {
            DFS("", 0, digits.length(), digits);
        }
        return this->strList;
    }
    
    void DFS(string ret, int index, int length, string digits) {
        if (index == length) {
            this->strList.push_back(ret);
            return;
        }
        
        string alphas = strMap[digits.at(index)];
        for (char ch : alphas) {
            DFS(ret + ch, index + 1, length, digits);
        }
    }
};