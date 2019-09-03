class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> solution;
        if (nums.size() < 4) {
            return solution;
        }
        std::sort(nums.begin(), nums.end());
        int sum = nums[0] + nums[1] + nums[2] + nums[3];
        std::size_t n = nums.size();
        for(int i = 0; i < n - 3; ++i) {
            /* Conditions for pruning */
            // target too small, no point in continuing
            if (target <= 0 and nums[i] > 0) break;
            // nums[i] has become too large, no point in continuing
            if (nums[i] + nums[i+1] + nums[i+2] + nums[i+3] > target) break;
            // nums[i] is so small, even the largest elements cannot help reach the sum
            if (nums[i] + nums[n-3] + nums[n-2] + nums[n-1] < target) continue; 
             // skip duplicates
            if (i > 0 && nums[i] == nums[i-1]) continue;
            for(int j = i+1; i < n - 2; ++j) {
                /* Some more pruning */
                // nums[j] has become too large, no point in continuing
                if (nums[i] + nums[j] + nums[j+1] + nums[j+2] > target) break;
                // nums[j] is so small, even the largest elements cannot help reach the sum
                if (nums[i] + nums[j] + nums[n-2] + nums[n-1] < target) continue; 
                if (j > i+1 and nums[j] == nums[j-1]) continue; // skip duplicates
                int left = j+1;
                int right = n - 1;
                while(left < right) {
                    sum = nums[i] + nums[j] + nums[left] + nums[right];
                    if (sum == target) {
                        solution.push_back({nums[i], nums[j], nums[left], nums[right]});
                        int last_left = nums[left];
                        int last_right = nums[right];
                        while (left < right && nums[left] == last_left) ++left;
                        while (left < right && nums[right] == last_right) --right;
                    } else if (sum < target) {
                        ++left;
                    } else {
                        --right;
                    } 
                }
            }
        }
        return solution;
    }
};