class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s == "")
            return 0;
        map<char, bool> charmap;
        int maxlen = 1;
        int len = 1;
        for (int i = 0; i < s.size() - 1; i++) {
            charmap[s[i]] = true;
            for (int j = i+1; j < s.size(); j++) {
                if (charmap[s[j]] == true) {
                    len = 1;
                    charmap.clear();
                    break;
                } else {
                    charmap[s[j]] = true;
                    len++;
                    if (len > maxlen)
                        maxlen = len;
                }                
            }
        }
        return maxlen;
    }
};