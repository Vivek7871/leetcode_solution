// class Solution {
// public:
//     string removeDuplicates(string s) {
//        vector<int>ans;
//        int n=s.size();
//        int i=0;
//        int j=1;
//        while(j<n){
//         if(s[i]!=s[j]){
//             ans.push_back();
//             i++; j++;
//         }
//         else{
//             ans.pop_back();
//         }
//        }
//        return ans;
       
//     }
// };
class Solution {
public:
    string removeDuplicates(string s) {
        string ans;
        for (char ch : s) {
            if (!ans.empty() && ans.back() == ch) {
                ans.pop_back(); // remove duplicate
            } else {
                ans.push_back(ch); // add current char
            }
        }
        return ans;
    }
};
