class Solution {
public:
    void generateSubsets(int index, vector<int>& nums, vector<int>& current, vector<vector<int>>& result) {
        // Base case: store the current subset
        result.push_back(current);

        // Recursive case
        for (int i = index; i < nums.size(); i++) {
            current.push_back(nums[i]); // include
            generateSubsets(i + 1, nums, current, result); // recurse
            current.pop_back(); // exclude (backtrack)
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;
        generateSubsets(0, nums, current, result);
        return result;
    }
};
