// Max Circular Subarray Sum

class Solution {
  public:
    // Function to find the maximum sum of numbers in a circular subarray.
    // A circular subarray means the array wraps around at the ends.
    int circularSubarraySum(vector<int> &arr) {

        // Get the size of the input array.
        int n = arr.size();

        // Create a helper array 'temp' to store the maximum sums for later use.
        vector<int> temp(n, 0); // Initialize all values in 'temp' to 0.

        // Variables to keep track of the current sum and the maximum sum.
        int curr = 0, maxi = 0;

        // Loop to fill the 'temp' array with the maximum sum from the back of 'arr'.
        // This means we look at subarrays starting from the rightmost part.
        for (int i = n - 1; i >= 0; i--) {
            curr += arr[i];            // Add the current element to the running sum.
            maxi = max(maxi, curr);    // Update the maximum sum so far.
            temp[i] = maxi;            // Store the maximum sum at this position in 'temp'.
        }

        // Variables to keep track of the overall answer and prefix sum.
        int ans = arr[0]; // Start with the first element as the default answer.
        int pre = 0;      // 'pre' will store the sum of elements from the start.
        curr = 0;         // Reset 'curr' to use for the forward loop.

        // Loop to calculate the maximum sum in a forward direction.
        for (int i = 0; i < n; i++) {
            curr += arr[i];           // Add the current element to the running sum.
            ans = max(ans, curr);     // Check if this is the largest sum we’ve seen so far.
            curr = max(0, curr);      // If 'curr' goes below 0, reset it (like starting fresh).

            // Check if combining prefix and 'temp' gives a better circular subarray sum.
            ans = max(ans, pre + temp[i]);

            pre += arr[i];            // Add the current element to the prefix sum.
        }

        // Return the largest sum we found.
        return ans;
    }
};