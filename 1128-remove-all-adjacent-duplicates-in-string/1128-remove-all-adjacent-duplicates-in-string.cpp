class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        int n = s.size();
        // for (int i = 0; i < n; i++) {
        //     char current_char = s[i];
        for(char ch:s)
        {

            if (!ans.empty() && ch == ans.back())
                ans.pop_back();
            else {
                ans.push_back(ch);
            }
        }
        return ans;
    }
};
