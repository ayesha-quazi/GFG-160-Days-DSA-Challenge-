// 𝖲𝗆𝖺𝗅𝗅𝖾𝗌𝗍 𝖯𝗈𝗌𝗂𝗍𝗂𝗏𝖾 𝖬𝗂𝗌𝗌𝗂𝗇𝗀 𝖭𝗈

class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        
        sort(arr.begin(),arr.end());
        int ans = 1;
        int n = arr.size();
        for (int i = 0; i < n; i++) 
        {
            if (arr[i] == ans)
            ans++;
            else if(arr[i] > ans)
            break;
        }
        
        return ans;
    } 
    
};