class Solution {
public:
    int search(vector<int>& nums, int target) {
        int i = 0, j = nums.size() - 1;
        int mid;
        while(i <= j)    {
            mid = i + ((j - i) / 2);
            if(nums[mid] == target) return mid;
            else if(target < nums[mid])  j = mid - 1;
            else i = mid + 1;
        }
        return -1;
    }
};
