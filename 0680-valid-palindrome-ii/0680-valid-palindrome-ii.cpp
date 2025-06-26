class Solution {
public:
    bool checkpalindrome(string s, int i, int j) {

        while (i <= j) {
            if (s[i] != s[j]) {
                return false;
            } else {
                i++;
                j--;
            }
        }
        return true;
    }
    bool validPalindrome(string s) 
    {
        int n = s.size();
        int i = 0;
        int j = n - 1;

        //  if(s[0]!=s[n-1]){
        //         return false;
        //     }
        while (i <= j) {

            if (s[i] == s[j]) {
                i++;
                j--;
                // return true;
            } else {
                bool ansOne = checkpalindrome(s, i + 1, j);
                bool ansTwo = checkpalindrome(s, i, j - 1);
                bool finalans = ansOne || ansTwo;
                return finalans;
            }
        }

        return true;
    }
};