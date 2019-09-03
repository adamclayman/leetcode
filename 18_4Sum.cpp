class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> solution;
        std::sort(nums.begin(), nums.end());
        int sum = nums[0] + nums[1] + nums[2] + nums[3];
        for(int i = 0; i < nums.size() - 3; i++) {
            for(int j = i+1; i < nums.size() - 2; j++) {
                int left = j+1;
                int right = nums.size() - 1;
                while(left < right) {
                    sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum < target) {
                        left++;
                        while (nums[left] == nums[left-1]) left++;
                    } else if (sum > target) {
                        right--;
                        while (nums[right] == nums[right-1]) right--;
                    } else {
                        solution.push_back({nums[i] + nums[j] + nums[left] + nums[right]});
                        left++;
                        while (nums[left] == nums[left-1]) left++;
                        right--;
                        while (nums[right] == nums[right-1]) right--;
                    }
                }
            }
            if (i > 0) {
                while(nums[i] == nums[i-1]) i++;            
            }
        }
        return solution;
    }
};