class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty())
            return 0;
        int last = nums[0];
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i] == last) {
                nums.erase(nums.begin() + i);
                i--;
            } else {
                last = nums[i];
            }
        }
        return nums.size();
    }
};