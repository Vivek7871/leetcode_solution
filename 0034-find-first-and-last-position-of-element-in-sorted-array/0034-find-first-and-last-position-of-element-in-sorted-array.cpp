class Solution {
public:
    void findfirst(vector<int>& nums, int n, int target, int  &first_index) 
    {
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = low+(high - low) / 2;
            if (nums[mid] == target)
            {
                first_index = mid;
                high = mid - 1;
            }
            else if (target > nums[mid]) 
            { 
                low = mid + 1;
            } 
            else 
            {
                high = mid - 1;
            }

        }
        
    }

    void findlast(vector<int>& nums, int n, int target, int &last_index) {
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = (high + low) / 2;
            if (nums[mid] == target) {
                last_index = mid;
                low = mid + 1;
            }
            else if (target > nums[mid]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        
        int first_index = -1;
        findfirst(nums, n, target, first_index);
        
        int last_index = -1;
        findlast(nums, n, target, last_index);
        
        vector<int> temp(2);
        temp[0] = first_index;
        temp[1] = last_index;
        
        return temp;
    }
};
