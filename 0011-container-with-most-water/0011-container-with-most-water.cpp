class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxWater = 0;

        while (left < right) {
            int width = right - left;
            int water = min(height[left], height[right]) * width;
            maxWater = max(maxWater, water);

            // Move the smaller height pointer
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxWater;
    }
};
