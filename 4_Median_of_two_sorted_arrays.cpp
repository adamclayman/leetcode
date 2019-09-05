class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        float ans;
        while (nums1.empty() != true || nums2.empty() != true) {
            int cur1 = nums1.empty() != true ? nums1[0] : INT_MAX;
            int cur2 = nums2.empty() != true ? nums2[0] : INT_MAX;
            if (cur1 < cur2) {
                merge.push_back(cur1);
                nums1.erase(nums1.begin());
            } else {
                merge.push_back(cur2);
                nums2.erase(nums2.begin());
            }
        }
        int n = merge.size();
        if (n % 2 == 0) {
            ans = (static_cast<float>(merge[n/2-1]) + static_cast<float>(merge[n/2]))/2;
        } else {
            ans = static_cast<float>(merge[n/2]);
        }
        return ans;
    }
};