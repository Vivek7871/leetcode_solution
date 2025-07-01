class Solution {
public:
    int possibleStringCount(string word) {
        int n = word.size();
        int result = 1;  // original string without removing anything

        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && word[j] == word[i]) {
                j++;
            }
            int groupLength = j - i;
            if (groupLength > 1) {
                result += groupLength - 1;  // one for each single-character removal
            }
            i = j;
        }

        return result;
    }
};
