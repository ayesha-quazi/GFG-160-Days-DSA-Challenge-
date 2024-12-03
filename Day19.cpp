// Min Chars to Add for Palindrome

class Solution {
  public:
    int minChar(string& s) {
        // Write your code here
        string rev = s;
        reverse(rev.begin(),rev.end());
        string complete = s+'$'+rev;
        int n=complete.length(),i=0,j=1;
        vector<int> lps(n,0);
        while(j<n){
            if(complete[i]==complete[j])lps[j++]=++i;
            else if(i!=0)i=lps[i-1];
            else j++;
        }
        return s.length()-i;
    }
};