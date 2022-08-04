class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
         vector<int> result(2,0);
        int j = numbers.size() - 1;
        for(int i = 0;i<numbers.size();) {
                int sum = numbers[i] + numbers[j];
                if(j < 0)   break;
                if(sum == target) {
                    result[0] = ++i;
                    result[1] = ++j;
                    return result;
                }
                sum < target?++i:--j;
        }
        return result;
    }
};