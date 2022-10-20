class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> res = arr;
        sort(res.begin(),res.end());
        map<int,int> r;
        int flag = 0;
        int count = 0;
        for(int i = 0; i < arr.size(); i++) {
            int data = res[i];
            if(r.find(data) == r.end()) {
                ++count;
                r[data] = count;
            }
        }
        vector<int> result;
        for(int i : arr) {
            int data = r[i];
            result.push_back(data);
        }
        return result;
    }
};

