
class Solution {
public:
    // Function to calculate number of days needed with given capacity
    int daysRequired(vector<int>& weights, int capacity) {
        int days = 1, currentLoad = 0;
        for (int weight : weights) {
            if (currentLoad + weight > capacity) {
                days++;
                currentLoad = 0;
            }
            currentLoad += weight;
        }
        return days;
    }

    int shipWithinDays(vector<int>& weights, int D) {
        int low = *max_element(weights.begin(), weights.end()); // minimum capacity
        int high = accumulate(weights.begin(), weights.end(), 0); // maximum capacity

        while (low < high) {
            int mid = low + (high - low) / 2;
            int requiredDays = daysRequired(weights, mid);

            if (requiredDays > D) {
                low = mid + 1; // Increase capacity
            } else {
                high = mid; // Try a smaller capacity
            }
        }

        return low;
    }
};
