class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;

        //  Convert HH:MM to minutes
        for (string time : timePoints) {
            int hour = stoi(time.substr(0, 2));
            int minute = stoi(time.substr(3, 2));
            minutes.push_back(hour * 60 + minute);
        }

        // Sort the minutes
        sort(minutes.begin(), minutes.end());

        int minDiff = INT_MAX;

        //  Check difference between adjacent times
        for (int i = 1; i < minutes.size(); ++i) {
            minDiff = min(minDiff, minutes[i] - minutes[i - 1]);
        }

        //  Check difference between last and first time 
        int lastFirstDiff = 1440 - minutes.back() + minutes[0];
        minDiff = min(minDiff, lastFirstDiff);

        return minDiff;
    }
};
