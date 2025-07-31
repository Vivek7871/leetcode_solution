class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (s.size() < p.size()) return result;

        vector<int> sCount(26, 0), pCount(26, 0);

        // Count frequency of each character in p
        for (char c : p) {
            pCount[c - 'a']++;
        }

        int windowSize = p.size();

        for (int i = 0; i < s.size(); i++) {
            // Add current character to the window
            sCount[s[i] - 'a']++;

            // Remove the character left to the window
            if (i >= windowSize) {
                sCount[s[i - windowSize] - 'a']--;
            }

            // If the window matches pCount, record the starting index
            if (sCount == pCount) {
                result.push_back(i - windowSize + 1);
            }
        }

        return result;
    }
};
