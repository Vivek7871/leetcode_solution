class Solution {
public:
    void sortColors(vector<int>& nums) {
    //     int red = 0, white = 0, blue = 0;

    
    // for(int i = 0; i < nums.size(); i++) {
    //     if(nums[i] == 0) red++;
    //     else if(nums[i] == 1) white++;
    //     else blue++;
    // }

    
    // for(int i = 0; i < red; i++) nums[i] = 0;

    
    // for(int i = red; i < red + white; i++) nums[i] = 1;

   
    // for(int i = red + white; i < nums.size(); i++) nums[i] = 2;
//Dutch National Flag algorithm
    int low = 0, mid = 0, high = nums.size() - 1;

    while(mid <= high) {
        if(nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
            // mid++;
        }
    }
}
    
};