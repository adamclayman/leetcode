class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty())
            return "";
        int smallest_size = INT_MAX;
        for (string str : strs) {
            if (str.size() < smallest_size)
                smallest_size = str.size();
        }
        string prefix = "";
        for (int i = 0; i < smallest_size; i++) {
            char temp = strs[0][i];
            for (string str : strs) {
                if (str[i] != temp) {
                    return prefix;
                }
            }
            prefix.append(1, temp);
        }
        return prefix;
    }
};