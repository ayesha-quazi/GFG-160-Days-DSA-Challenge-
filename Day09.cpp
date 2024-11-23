// Minimize the Heights II

#include <algorithm> // For sort, max, and min functions
#include <vector>    // For using vector
using namespace std;

class Solution {
public:
    int getMinDiff(vector<int>& arr, int k) {
        int n = arr.size();
        
        // If there's only one element, no difference to minimize
        if (n == 1)
            return 0;

        // Step 1: Sort the array to process it easily
        sort(arr.begin(), arr.end());

        // Initialize the answer as the difference between the largest and smallest elements
        int ans = arr[n - 1] - arr[0];

        // Step 2: Iterate through the array and calculate possible differences
        for (int i = 0; i < n - 1; i++) {
            // The new max and min values after adding/subtracting k
            int maxl = max(arr[n - 1] - k, arr[i] + k);
            int minm = min(arr[0] + k, arr[i + 1] - k);

            // If the new minimum value is negative, skip this iteration
            if (minm < 0)
                continue;

            // Update the answer with the smallest difference found
            ans = min(ans, maxl - minm);
        }

        // Return the smallest difference found
        return ans;
    }
};