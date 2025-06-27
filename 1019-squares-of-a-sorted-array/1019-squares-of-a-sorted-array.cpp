class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        int n=nums.size();
        unsigned multi;
        int i=0;
        vector<int> ans;
        while(i<n){
           multi=nums[i]*nums[i];
           ans.push_back(multi);
           i++;

        }
        sort(ans.begin(),ans.end());


        return ans;
        
        
    }
};