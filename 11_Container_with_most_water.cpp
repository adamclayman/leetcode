class Solution {
public:
    int maxArea(vector<int>& height) {
        int volume;
        int maxarea = 0;
        int l = 0;
        int r = height.size() - 1;
        while (l < r) {
            maxarea = std::max(maxarea, (r - l) * std::min(height[r], height[l]));
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxarea;
    }
};