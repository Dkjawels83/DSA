#include <iostream>
#include <vector>

using namespace std;



    int maxProfit(vector<int>& prices) {
        int maxProfit = 0, bestBuy = prices[0];
        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] > bestBuy) {
                maxProfit = max(maxProfit, prices[i] - bestBuy);
            }
            bestBuy = min(bestBuy, prices[i]);
        }
        return maxProfit;
    }


int main() {
    
    vector<int> prices;
    int n;

    cout << "Enter the number of days: ";
    cin >> n;

    cout << "Enter the stock prices: ";
    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        prices.push_back(price);
    }

    int result = maxProfit(prices);
    cout << "Maximum profit: " << result << endl;

    return 0;
}

