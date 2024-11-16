// Move all zeros to the end. 

#include <vector>
using namespace std;

class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int left = 0; 
        for(int right = 0; right < arr.size(); right++) {
            if(arr[right] != 0) {
                swap(arr[right], arr[left]);
                left++;
            }
        }
    }
};
