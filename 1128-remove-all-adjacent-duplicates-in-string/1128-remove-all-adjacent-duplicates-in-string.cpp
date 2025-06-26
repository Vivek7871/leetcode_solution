class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char current_char = s[i];

            if (!ans.empty() && current_char == ans.back())
                ans.pop_back();
            else {
                ans.push_back(current_char);
            }
        }
        return ans;
    }
};
