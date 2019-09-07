class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() <= 1)
            return nums.size();
        vector<int>::iterator it;
        for (it=nums.begin()+1; it != nums.end(); it++) {
            if((*it) == *(it-1))
                it = nums.erase(it-1);
        }
        return nums.size();
    }
};