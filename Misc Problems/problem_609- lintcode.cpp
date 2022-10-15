class Solution {
public:
    /**
     * @param nums: an array of integer
     * @param target: an integer
     * @return: an integer
     */
    int twoSum5(vector<int> &nums, int target) {
        // write your code here
        int i = 0, j = nums.size() - 1, result = 0;
        while(i < j)    {
            int sum = nums[i] + nums[j];
            if(sum > target)   j--;
            else    {
                result += j - i;
                i++;
            }
        }
        return result;
    }
}