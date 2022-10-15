class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        vector<int> result;
        make_heap(nums.begin(),nums.end(),greater<int>());
        while(nums.size())   {
            pop_heap(nums.begin(), nums.end(),greater<int>());
            int data = nums.back();
            nums.pop_back();
            if(data > target)   return result;
            if(data == target)   result.push_back(i);
            i++;
        }
        return result;
    }
};
