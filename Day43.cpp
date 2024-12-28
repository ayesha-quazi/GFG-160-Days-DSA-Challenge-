// Count pairs with given sum

class Solution {
  public:
    int countPairs(vector<int> &arr, int target) {
        // Code here
        unordered_map<int,int>mp;
        int count=0;
        for(int i=0;i<arr.size();i++){
            int second=target-arr[i];
            count+=mp[second];
            mp[arr[i]]++;
        }
        return count;
    }
};