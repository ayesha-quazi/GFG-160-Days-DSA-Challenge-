// Search in Rotated Sorted Array

class Solution {
  public:
    int search(vector<int>& arr, int key) {
        // code Here
        int n=arr.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=(s+e)/2;
            
            if(arr[mid]==key)
            return mid;
            
            if(arr[s]<=arr[mid]){
                //left wale array
                if(arr[s]<=key && key <= arr[mid])
                e=mid-1;
                else
                s=mid+1;
                
            }
            else{
            //right wale array
            if(arr[mid]<=key && key<= arr[e])
            s=mid+1;
            else
            e=mid-1;
            }
        }
        return -1;
    }
    
};