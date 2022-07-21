class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> umap,jmap;
        for(auto i : s) {
            ++umap[i];
        }
        for(auto i : t) {
            ++jmap[i];
        }
        if(umap == jmap)
            return true;
        return false;
    }
};