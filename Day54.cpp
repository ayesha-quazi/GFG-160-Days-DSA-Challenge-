// Pair with given sum in a sorted array

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Complete the function
        int s=0;
        int e=arr.size()-1;
        int count = 0;
        while(s<e){
            int sum = arr[s] + arr[e];
            if(sum>target) e--;
            else if(sum<target) s++;
            else{
                //sum == target;
                int ele1=arr[s], ele2=arr[e];
                int c1=0, c2=0;
                while(s<=e && arr[s] == ele1){
                    c1++;
                    s++;
                }
                while(s<=e && arr[e] == ele2){
                    c2++;
                    e--;
                }
                if(ele1 == ele2) count+=c1*(c1-1)/2;
                else count+=c1*c2;
            }
        }        
        return count;
    }
};