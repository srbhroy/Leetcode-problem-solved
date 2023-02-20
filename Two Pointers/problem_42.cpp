class Solution {
public:
    int trap(vector<int>& nums) {
        int maxleft = 0, maxright = 0, res = 0, i ,j;
    i = 0;
    j = nums.size() - 1;
    while(i <= j)   {
        int minn = min(maxleft,maxright);
        if(nums[i] <= nums[j])  {
            int temp = minn - nums[i] <= 0? 0 : minn - nums[i];
            res += temp;
            maxleft = max(maxleft,nums[i]);
            maxright = max(maxright,nums[j]);
            ++i;
        }
        else    {
            int temp = minn - nums[j] <= 0? 0 : minn - nums[j];
            res += temp;
            maxleft = max(maxleft,nums[i]);
            maxright = max(maxright,nums[j]);
            --j;
        }
    }
    return res;
    }
};