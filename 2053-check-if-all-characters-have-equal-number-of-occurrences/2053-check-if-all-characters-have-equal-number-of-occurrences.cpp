class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;

        // Step 1: Count frequency of each character
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: Compare all values to the first one
        int expectedCount = freq.begin()->second;
        for (auto& pair : freq) {
            if (pair.second != expectedCount) {
                return false;
            }
        }

        return true;
    }
};
