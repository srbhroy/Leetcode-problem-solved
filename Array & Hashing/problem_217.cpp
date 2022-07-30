class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int,int> umap;
        for(auto i : nums)  {
            ++umap[i];
            if(umap[i] > 1) return true;
        }
        return false;
    }
};