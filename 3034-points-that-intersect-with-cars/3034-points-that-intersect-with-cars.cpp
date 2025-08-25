class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        // Sort intervals by start
        sort(nums.begin(), nums.end());

        int total = 0;
        int start = nums[0][0], end = nums[0][1];

        for (int i = 1; i < nums.size(); i++) {
            int l = nums[i][0], r = nums[i][1];
            if (l <= end) {
                // merge intervals
                end = max(end, r);
            } else {
                // add length of previous interval
                total += (end - start + 1);
                start = l;
                end = r;
            }
        }

        // last interval
        total += (end - start + 1);

        return total;
    }
};
