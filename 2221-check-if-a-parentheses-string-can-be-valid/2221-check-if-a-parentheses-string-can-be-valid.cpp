class Solution {
public:
    bool canBeValid(string s, string locked) {
        int n = s.size();
        if (n % 2 == 1) return false;  // odd length can't be valid

        int balance = 0;

        // Pass 1: left to right
        for (int i = 0; i < n; i++) {
            if (locked[i] == '1') {
                balance += (s[i] == '(' ? 1 : -1);
            } else {
                balance += 1;  // assume '('
            }
            if (balance < 0) return false;  // too many ')'
        }

        balance = 0;

        // Pass 2: right to left
        for (int i = n - 1; i >= 0; i--) {
            if (locked[i] == '1') {
                balance += (s[i] == ')' ? 1 : -1);
            } else {
                balance += 1;  // assume ')'
            }
            if (balance < 0) return false;  // too many '('
        }

        return true;
    }
};
