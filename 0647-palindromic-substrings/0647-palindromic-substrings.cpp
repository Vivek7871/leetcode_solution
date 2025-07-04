// class Solution {
// public:
//     int countSubstrings(string s) {
//         vector<char> ans;
//         vector<string> ans2;
//         int n = s.size();
//         for (int i = 0; i < n; i++) {
//             ans.push_back(s[i]);
//         }
//         string temp = "";
//         for (int i = 0; i < n-1; i++) {
//             for (int j = i + 1; j < n; j++) {
//                 if (s[i] == s[j]) {
                    
//                     temp += s[i];
//                     temp += s[j];
//                     ans2.push_back(temp);
//                     temp.clear();

//                 } else {
//                     j++;
//                 }
//             }
//         }
//         return ans.size()+ans2.size();

//     }
// };

class Solution {
public:
    // Helper function to check if a substring is palindrome
    bool isPalindrome(string str) {
        int i = 0, j = str.length() - 1;
        while (i < j) {
            if (str[i] != str[j])
                return false;
            i++;
            j--;
        }
        return true;
    }

    int countSubstrings(string s) {
        int count = 0;
        int n = s.size();

        // Traverse all possible substrings
        for (int i = 0; i < n; i++) {
            string temp = "";
            for (int j = i; j < n; j++) {
                temp += s[j]; // form substring from i to j
                if (isPalindrome(temp)) {
                    count++;
                }
            }
        }

        return count;
    }
};

  
