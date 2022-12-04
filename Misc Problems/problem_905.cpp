class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        list<int> temp;
        vector<int> result;
        for(int i : nums)
            if(i % 2 == 0)  temp.push_front(i);
            else temp.push_back(i);
        for(int i : temp)
            result.push_back(i);
        return result;
    }
};