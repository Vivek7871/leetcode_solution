class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> nextGreater;
        stack<int> st;

        for (int num : nums2) {
            while (!st.empty() && st.top() < num) {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }

        // Jo elements ka next greater nahi mila unko -1 assign kar do
        while (!st.empty()) {
            nextGreater[st.top()] = -1;
            st.pop();
        }

        vector<int> result;
        for (int num : nums1) {
            result.push_back(nextGreater[num]);
        }
        return result;
    }
};
