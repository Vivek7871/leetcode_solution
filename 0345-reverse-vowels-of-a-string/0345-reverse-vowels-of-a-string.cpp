class Solution {
public:
    bool isVowel(char ch) {
        ch = tolower(ch);
        return strchr("aeiou", ch);
    }
    string reverseVowels(string str) {

        int i = 0, j = str.length() - 1;

        while (i <= j) {
            if (!isVowel(str[i])) {
                i++;
            } else if (!isVowel(str[j])) {
                j--;
            } else {
                swap(str[i], str[j]);
                i++;
                j--;
            }
        }

        return str;
    }

};