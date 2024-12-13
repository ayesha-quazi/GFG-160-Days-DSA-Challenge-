// Sorted and Rotated Minimum

class Solution {
  public:
    int findMin(vector<int>& arr) {
        
        // complete the function here
        
        int n=arr.size(),low=0,high=n-1,mid=0;
        while(low<high){
            mid=(low+high)/2;
            if(arr[mid]<=arr[high])high=mid;
            else low=mid+1;
        }
        return arr[low];
    }
};