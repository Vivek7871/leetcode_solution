#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        mp[0] = 1; // prefix sum 0 ek baar aaya

        int count = 0, prefixSum = 0;
        for(int num : nums){
            prefixSum += num;

            // check if prefixSum - k exists
            if(mp.find(prefixSum - k) != mp.end()){
                count += mp[prefixSum - k];
            }

            // store current prefixSum
            mp[prefixSum]++;
        }
        return count;
    }
};
