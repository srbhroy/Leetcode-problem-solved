class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>,greater<int>> num;
        int n = k;
        for(auto i : nums)  num.push(i);
        while(num.size() > k)   num.pop();
        return num.top();
        
    }
};
