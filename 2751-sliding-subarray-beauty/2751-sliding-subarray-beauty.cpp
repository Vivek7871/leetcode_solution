#include <vector>
#include <set>
using namespace std;

class Solution {
public:
    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {
        multiset<int> s;
        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] < 0) s.insert(nums[i]);

            if (i >= k) {
                if (nums[i-k] < 0) {
                    s.erase(s.find(nums[i-k]));
                }
            }

            if (i >= k-1) {
                if (s.size() >= x) {
                    auto it = s.begin();
                    advance(it, x-1);
                    res.push_back(*it);
                } else {
                    res.push_back(0);
                }
            }
        }
        return res;
    }
};
