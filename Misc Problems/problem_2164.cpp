class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int> odd,even,result;
        for(int i = 0; i < nums.size(); i++) {
            if((i+1)%2) odd.push_back(nums[i]);
            else    even.push_back(nums[i]);
        }
        sort(even.begin(),even.end(),greater<int>());
        sort(odd.begin(),odd.end());
        int o = 0,e = 0;
        for(int i = 0; i < nums.size(); i++) {
            if((i+1)%2) {
                result.push_back(odd[o]);
                ++o;
            }
            else    {
                result.push_back(even[e]);
                ++e;
            }
        }
        return result;
    }
};