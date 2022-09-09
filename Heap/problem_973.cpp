class cmp {
public:
        bool operator()(pair<int,pair<int,int>> a, pair<int,pair<int,int>> b)    {
        return a.first > b.first;
    }
};
class Solution {
public:
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    vector<vector<int>> result(k);
    priority_queue<pair<int,pair<int,int>>, vector<pair<int,pair<int,int>>>,cmp> hash;
    for(auto i : points)    {
        int distance = (pow(i[0],2) + pow(i[1],2));
        hash.push(make_pair(distance,make_pair(i[0],i[1])));
    }
    while(k)  {
        auto i = hash.top().second.first ,j = hash.top().second.second;
        result[k - 1].push_back(i);
        result[k - 1].push_back(j);
        hash.pop();
        --k;
    }
    return result;
   }
};
