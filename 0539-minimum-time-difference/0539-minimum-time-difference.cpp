class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector <int> minutes;
        int i=0;
        while(i<timePoints.size()){
            int hours = stoi(timePoints[i].substr(0,2));
            int min= stoi(timePoints[i].substr(3,2));
            minutes.push_back(hours*60+min);
            i++;
        }
        sort(minutes.begin(),minutes.end());
        int min_diff= INT_MAX;
        for(int i=1;i<minutes.size();i++){
            min_diff=min(min_diff,minutes[i]-minutes[i-1]);

        }
        int circular_diff = (1440 - minutes.back() + minutes[0]);
        min_diff = min(min_diff, circular_diff);

        return min_diff;
        
    }
};