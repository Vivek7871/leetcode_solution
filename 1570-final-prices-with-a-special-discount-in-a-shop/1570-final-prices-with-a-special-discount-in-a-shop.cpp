class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> result(n);
        stack<int> st;

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            while (!st.empty() && st.top() > prices[i]) {
                st.pop();
            }
            // If discount available
            result[i] = prices[i] - (st.empty() ? 0 : st.top());
            st.push(prices[i]);
        }
        return result;
    }
};
