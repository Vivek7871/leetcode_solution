class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int left = 0, right = 0;
        int maxLen = 0;

        while (right < s.length()) {
            char currentChar = s[right];

            // If character is already seen and is in the current window
            if (mp.find(currentChar) != mp.end() && mp[currentChar] >= left) {
                left = mp[currentChar] + 1;
            }

            mp[currentChar] = right; // store/update index of character
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};
