class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // m is size of nums1 and n is size of nums2

        int i = 0;
        int j = 0;
        vector<int> result;
        while (i < m && j < n) {
            if (nums1[i] <= nums2[j]) {
                result.push_back(nums1[i++]);
            } else {
                result.push_back(nums2[j++]);
            }
        }
        while (i < m) {
            result.push_back(nums1[i++]);
        }
        while (j < n) {
            result.push_back(nums2[j++]);
        }
        nums1 = result;
    }
};