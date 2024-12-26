// Two Sum - Pair with Given Sum


class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        //Code Here
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
            int diff=target-arr[i];
            if(mp.find(diff)!=mp.end()) return true;
            mp[arr[i]]++;
        }
        return false;
    }
};
