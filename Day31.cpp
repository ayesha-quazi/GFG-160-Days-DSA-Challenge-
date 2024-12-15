// Peak Elements

class Solution {
  public:
    int peakElement(vector<int> &arr) {
        int n = arr.size(); // Get size of the array
        int start = 0, end = n - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            // Check if mid is a peak element
            bool left_ok = (mid == 0 || arr[mid] >= arr[mid - 1]);
            bool right_ok = (mid == n - 1 || arr[mid] >= arr[mid + 1]);

            if (left_ok && right_ok) {
                return mid; // Peak found
            }

            // Move towards the side with a higher neighbor
            if (mid < n - 1 && arr[mid] < arr[mid + 1]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }

        return -1; // Default fallback, though this case shouldn't happen
    }
};
