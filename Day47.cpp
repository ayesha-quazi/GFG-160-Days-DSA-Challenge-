// 

class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        unordered_set<int> nums(arr.begin(),arr.end());
        int maxLen = 0;
        
        for (auto i:arr){
            if(nums.find(i-1)==nums.end()){
                int curr = i; 
                int len = 1;
            
            while(nums.find(curr+1) != nums.end()){
                curr++;
                len++;
            }
            maxLen = max(maxLen, len);
        }
    }
        return maxLen; 
    }
};
   