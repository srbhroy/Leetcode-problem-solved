class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> hash;
    vector<int> result(2,-1);
    for(int i = 0; i < nums.size(); i++)    {
        int remainder = target - nums[i];
        if(hash.find(nums[i]) != hash.end()) {
            result[0] = hash[nums[i]];
            result[1] = i;
            return result;
        }
        hash[remainder] = i;
    }
    return result;
    }
};