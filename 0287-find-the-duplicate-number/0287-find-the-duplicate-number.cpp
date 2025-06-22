class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] > 1) {
                return num;
            }
        }

        return -1;
    }
};