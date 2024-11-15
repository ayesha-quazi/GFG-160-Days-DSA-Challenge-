// Second Largest
/* Given an array of positive integers arr[], return the second largest element from the array. If the second largest element doesn't exist then return -1.

Note: The second largest element should not be equal to the largest element. */

class Solution {
  public:
    // Function returns the second
    // largest elements
    int getSecondLargest(vector<int> &arr) {
        // Code Here
        
        int n = arr.size();
        int largest = arr[0];
        int secLargest = INT_MIN;
        
        for(int i=1; i<n; i++){
            
            if(arr[i] > largest){
                secLargest = largest;
                largest = arr[i];
            }
            
            else if(arr[i] < largest && arr[i] > secLargest){
                secLargest = arr[i];
            }
        }
        
        if(secLargest == INT_MIN) {
            return -1;
        }
    
        return secLargest;
        
    }
};