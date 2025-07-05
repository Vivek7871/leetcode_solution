class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mp;
        char curr = 'a';
        
        // Step 1: Create substitution mapping from key
        for (char c : key) {
            if (c != ' ' && mp.find(c) == mp.end()) {
                mp[c] = curr;
                curr++;
            }
        }

        // Step 2: Decode the message
        string decoded = "";
        for (char c : message) {
            if (c == ' ')
                decoded += ' ';
            else
                decoded += mp[c];
        }

        return decoded;
    }
};
