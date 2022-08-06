class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        for(int i = 0; i < prices.size(); i++)    {
            for(int j = i + 1; j < prices.size(); j++)    {
                int remainder = prices[j] - prices[i];
                if(remainder > profit)
                    profit = remainder;
            }
        }
        return profit;
    }
};