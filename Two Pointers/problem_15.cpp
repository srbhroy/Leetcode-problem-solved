class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
     
        sort(nums.begin(),nums.end());
        
        for(int i = 0; i < nums.size(); i++)    {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int j = i + 1, k = nums.size() - 1;
            while(j < k)    {
                if(nums[i] + nums[j] + nums[k] > 0)   {
                    --k;
                    continue;
                }
                else if(nums[i] + nums[j] + nums[k] < 0)   {
                    ++j;
                    continue;
                }
                else    {
                    result.insert(result.end(), {nums[i],nums[j],nums[k]});
                    k = nums.size() - 1;
                    while(nums[j] == nums[j+1]) {
                        ++j;
                    }
                                        ++j;
                }
                
            }
        }
        
        return result;
    }
};
