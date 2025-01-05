// Count Pairs whose sum is less than target


class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Your code here
        sort(arr.begin(),arr.end());
        int count=0,s=0,e=arr.size()-1;
        while(s<e){
            if(arr[s]+arr[e]>=target) e--;
            else{
                count+=e-s;
                s++;
            }
        }
        return count;
    }
};
