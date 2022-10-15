class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
            if(nums[i] == target)   result.push_back(i);
        if(result.size() >= 2)  result.erase(result.begin()+1,result.end()-1);
        else if(result.size() == 1) return {result[0],result[0]};
        else    return {-1,-1};
        return result;
    }
};