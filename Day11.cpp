// Maximum Product Subarray

// User function Template for C++

class Solution {
  public:
    // This function finds the maximum product of a subarray in the given array 'arr'.
    int maxProduct(vector<int> &arr) {
      
        // 'left' and 'right' are used to keep track of the product as we move from left to right
        // and from right to left in the array. We initialize them to 1.
        int left = 1, right = 1;
        
        // 'n' is the size of the array.
        int n = arr.size();
        
        // 'maxLeft' and 'maxRight' are used to store the largest product seen so far
        // while scanning from left to right and right to left respectively.
        // INT_MIN is the smallest possible integer, so we start with the lowest value.
        int maxLeft = INT_MIN, maxRight = INT_MIN;
        
        // Loop through the array from the start to the end.
        for (int i = 0; i < n; i++) {
            // Multiply the current number to the 'left' product.
            left *= arr[i];
            
            // Update 'maxLeft' if the current 'left' product is larger.
            maxLeft = max(maxLeft, left);
            
            // If 'left' becomes 0 (because of multiplying by 0), reset it to 1.
            // This helps to start fresh in case the product was ruined by a zero.
            if (left == 0) left = 1;
        }
        
        // Loop through the array from the end to the start.
        for (int i = n - 1; i >= 0; i--) {
            // Multiply the current number to the 'right' product.
            right *= arr[i];
            
            // Update 'maxRight' if the current 'right' product is larger.
            maxRight = max(maxRight, right);
            
            // If 'right' becomes 0 (because of multiplying by 0), reset it to 1.
            // This helps to start fresh in case the product was ruined by a zero.
            if (right == 0) right = 1;
        }
        
        // The final answer is the largest value between 'maxLeft' and 'maxRight'.
        return max(maxLeft, maxRight);
    }
};