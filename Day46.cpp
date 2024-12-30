// Union of Arrays with Duplicates


class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int findUnion(vector<int>& a, vector<int>& b) {
        
        // code here
        
        unordered_set<int>st;
        
        for(int i=0; i<a.size();i++) st.insert(a[i]);
        
        for(int i=0; i<b.size();i++) st.insert(b[i]);
        
        return st.size();
    }
};
