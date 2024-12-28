// Find All Triplets with Zero Sum

class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        // Code here
        int n=arr.size();
        vector<vector<int>> ans;
        unordered_map<int,vector<int>> mm;
        for(int i=0;i<n;i++){
            mm[arr[i]].push_back(i);
        }
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int rem = 0-(arr[i]+arr[j]);
                if(mm.find(rem)!=mm.end()){
                    int size=mm[rem].size();
                    for(int k=size-1;k>=0;k--){
                        if(mm[rem][k]<=j)break;
                        ans.push_back({i,j,mm[rem][k]});
                    }
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};