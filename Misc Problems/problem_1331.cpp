class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res = arr;
        sort(res.begin(),res.end());
        map<int,int> r;
        for(int i = 0; i < arr.size(); i++) {
            int data = res[i];
            if(r.find(data) == r.end()) r[data] = i;
        }
        vector<int> result;
        for(int i : arr) {
            int data = r[i];
            result.push_back(data + 1);
        }
        return result;
    }
};

