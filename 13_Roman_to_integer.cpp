class Solution {
public:
    int romanToInt(string s) {
        map<char, int> vmap;
        int value = 0;
        vmap['I'] = 1;
        vmap['V'] = 5;
        vmap['X'] = 10;
        vmap['L'] = 50;
        vmap['C'] = 100;
        vmap['D'] = 500;
        vmap['M'] = 1000;
        for (int i = 0; i < s.size(); i++) {
            if (i != s.size()-1) {
                if (vmap[s[i+1]] > vmap[s[i]]) {
                    value = value + vmap[s[i+1]] - vmap[s[i]];
                    i++;
                    
                } else {
                    value = value + vmap[s[i]];
                }
            } else {
                value = value + vmap[s[i]];
            }
        }
        return value;
    }
};