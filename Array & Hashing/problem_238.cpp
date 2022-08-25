class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod = 1, count = 0;
        vector<int> result;
        for(auto i : nums)  {
            if(i == 0)  {
                ++count;
            }
            else    prod *= i;
        }
        for(auto i : nums)  {
            if(count > 1)  {
                vector<int> resul(nums.size(),0);
                return resul;
            }
            else if(i == 0)    {
                result.push_back(prod);
            }
            else if(count > 0 && i != 0)  {
                result.push_back(0);
            }
            else
                result.push_back(prod / i);
        }
        return result;
    }
};
