// Insert Interval

#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals, vector<int> &newInterval) {
        vector<vector<int>> ans;
        vector<int> newEvent = newInterval;
        int i = 0;
        int N = intervals.size();

        // Add all intervals that come before the newInterval
        while (i < N && newEvent[0] > intervals[i][1]) {
            ans.push_back(intervals[i]);
            i++;
        }

        // Merge overlapping intervals
        while (i < N && newEvent[1] >= intervals[i][0]) {
            newEvent[0] = min(newEvent[0], intervals[i][0]);
            newEvent[1] = max(newEvent[1], intervals[i][1]);
            i++;
        }
        ans.push_back(newEvent);

        // Add remaining intervals
        while (i < N) {
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};