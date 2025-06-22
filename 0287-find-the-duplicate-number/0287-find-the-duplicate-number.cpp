class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int, int> freq;

        for (int num : nums) {
            freq[num]++;
            if (freq[num] > 1) {
                return num;
            }
            
        }
         

        return -1;
    }
};