class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n=nums.size();
        // int ans=0;
        // for(int i=0;i<n;i++){
        //     ans^=nums[i];
        // }
        // for(int i=0;i<=n;i++){
        //     ans^=i;
        // }
        // return ans;
        // }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int low=0;int high=n-1;
        
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==mid){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return low ;

     }
               

};