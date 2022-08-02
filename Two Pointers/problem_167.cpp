class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        for(int i = 0; i < numbers.size(); i++) {
            int remainder = target - numbers[i];
            for(int j = i + 1; j < numbers.size() && remainder >= numbers[j]; j++) {
                if(remainder == numbers[j]) {
                    result.push_back(i+1);
                    result.push_back(j+1);
                    return result;
                }
            }
        }
        return result;
    }
};