class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> result;
        int size = numbers.size() - 1, i = 0, j = i + 1;
        while(i < size) {
            int sum = numbers[i] + numbers[size];
            if(sum < target)    i++;
            else if(sum > target)    size--;
            else {
                result.push_back(i+1);
                result.push_back(size+1);
                break;
            }
        }
        return result;
    }
};