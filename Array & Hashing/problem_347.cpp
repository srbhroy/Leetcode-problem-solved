class Solution {
public:
    static bool comp(pair<int,int> a, pair<int,int> b)  {
        return (a.second > b.second);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        vector<pair<int,int>> p;
        vector<int> result;
        for(auto i : nums)   ++m[i];
        
        for (auto& it : m)  p.push_back(it);
        
        sort(p.begin(),p.end(),comp);
        
        for(auto i : p) {
            if(k)   {       
            result.push_back(i.first);
            --k;
            }
            else
                break;
        }
        return result;
    }
};