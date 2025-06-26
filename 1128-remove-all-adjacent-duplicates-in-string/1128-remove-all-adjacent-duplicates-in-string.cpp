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
        int n=s.size();
      for(int i=0;i<n;i++){
        char current_char=s[i];
        if(ans.empty()) ans.push_back(current_char);
        else if(current_char==ans.back()) ans.pop_back();
        else{
            ans.push_back(current_char);
        }
      }
      return ans;
    }
};
