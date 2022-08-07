class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int min = prices[0];
        for(int i = 1; i < prices.size(); i++)    {
            if(prices[i] < min) min = prices[i];
            int remainder = prices[i] - min;
            profit = max(profit, remainder);
        }
        return profit;
    }
};