#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int n = prices.size();
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                ans = max(ans, prices[j] - prices[i]);
            }
        }
        return ans;
    }
};

int main() {
    // Creating an instance of the Solution class
    Solution solution;

    // Example input prices
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    // Calculating the maximum profit using the maxProfit function
    int maxProfit = solution.maxProfit(prices);

    // Displaying the maximum profit
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
