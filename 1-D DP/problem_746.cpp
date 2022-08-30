class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int> dp(cost.size() + 1, 0);
        if(cost.size() < 3) return min(cost[0], cost[1]);
        dp[cost.size() - 1] = cost[cost.size() - 1];
        for(int i = dp.size() - 3; i >= 0; --i)   {
            dp[i] = cost[i] + min(dp[i + 1], dp[i + 2]);
        }
        return min(dp[0], dp[1]);
    }
};
