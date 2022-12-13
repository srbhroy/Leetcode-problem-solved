class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        list<int> s,r;
        priority_queue<pair<int,int>> rr;
        vector<int> result;
        for(int i = 0; i < k; i++)  {
            s.push_back(nums[i]);
            rr.push({nums[i],i});
        }
        result.push_back(rr.top().first);
        int i = k, siz = nums.size();
        while(i < siz)   {
            rr.push({nums[i],i});
            if(rr.top().second <= i - k)    rr.pop();
            else {
                result.push_back(rr.top().first);
                ++i;
            }
        }
        return result;   
}
};