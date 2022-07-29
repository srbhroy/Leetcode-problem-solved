class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> umap;
        for(auto i : nums)  {
            if(umap.find(i) == umap.end())  {
                umap.insert(i);
                continue;
            }
                return true;
        }
        return false;
    }
};