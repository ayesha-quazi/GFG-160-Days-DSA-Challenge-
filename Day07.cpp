// Stock Buy and Sell – Multiple Transaction Allowed

#include <vector>
using namespace std;

class Solution {
public:
    int maximumProfit(vector<int>& prices) {
        int profit = 0; // Initialize profit
        int n = prices.size(); // Size of the prices array

        for (int i = 0; i < n - 1; i++) {
            // If the next day's price is higher, add the difference to profit
            if (prices[i + 1] > prices[i]) {
                profit += prices[i + 1] - prices[i];
            }
        }

        return profit; // Return the total profit
    }
};
