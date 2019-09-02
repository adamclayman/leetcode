class Solution {
public:
    int maxArea(vector<int>& height) {
        int volume;
        int max = 0;
        for (int i = 0; i < height.size() - 1; i++) {
            for (int j = i + 1; j < height.size(); j++) {
                volume = (j - i) * std::min(height[i], height[j]);
                if (volume > max) {
                    max = volume;
                }
            }
        }
        return max;
    }
};