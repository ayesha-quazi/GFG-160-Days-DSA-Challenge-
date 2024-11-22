// Stock Buy and Sell – Max one Transaction Allowed

class Solution {
public:
    int maximumProfit(vector<int> &prices) {
        // Initialize variables
        int maxProfit = 0; // Maximum profit so far
        int minPrice = prices[0]; // Minimum price encountered so far
        int days = prices.size(); // Number of days

        // Iterate over the prices starting from the second day
        for (int day = 1; day < days; day++) {
            // Update maximum profit if selling on this day is more profitable
            maxProfit = max(maxProfit, prices[day] - minPrice);
            // Update the minimum price encountered so far
            minPrice = min(minPrice, prices[day]);
        }

        return maxProfit;
    }
};