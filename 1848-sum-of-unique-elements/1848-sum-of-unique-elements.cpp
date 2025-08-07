class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> freq;
        
        // Count frequency of each number
        for (int num : nums) {
            freq[num]++;
        }
        
        // Sum only those numbers which appear exactly once
        int sum = 0;
        for (auto& pair : freq) {
            if (pair.second == 1) {
                sum += pair.first;
            }
        }
        
        return sum;
    }
};
