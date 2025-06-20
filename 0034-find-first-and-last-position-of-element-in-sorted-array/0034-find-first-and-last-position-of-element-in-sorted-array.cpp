class Solution {
public:
    int findFirst(vector<int>& nums, int n, int target) {
        int low = 0;
        int high = n - 1;
        int first_index = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                first_index = mid;
                high = mid - 1; // Keep searching in the left half
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return first_index;
    }

    int findLast(vector<int>& nums, int n, int target) {
        int low = 0;
        int high = n - 1;
        int last_index = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == target) {
                last_index = mid;
                low = mid + 1; // Keep searching in the right half
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return last_index;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int first_index = findFirst(nums, n, target);
        int last_index = findLast(nums, n, target);

        return {first_index, last_index};
    }
};
