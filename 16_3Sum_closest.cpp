class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        std::sort(nums.begin(), nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        int nums_size = nums.size();
        for (int i = 0; i < nums.size() - 2; ++i) {
            // while(nums[i] == nums[i-1]) continue; // Continue if starter is a duplicate            
            int left = i + 1;
            int right = nums_size - 1;
            int sum;
            while (left < right) {
                sum = nums[i] + nums[left] + nums[right];
                if (abs(closest - target) > abs(sum - target)) {
                    closest = sum;
                }
                if (sum < target) {
                    left++;
                    // while (nums[left] == nums[left-1]) left++;
                } else if (sum > target) {
                    right--;
                    // while (nums[right] == nums[right+1]) right--;
                } else {
                    return target;
                }                
            }
        }
        return closest;
    }
};