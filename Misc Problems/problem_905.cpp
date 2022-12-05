vector<int> sortArrayByParity(vector<int>& nums) {
        int i = 0, j = nums.size() - 1;
        while(i < j)    {
            int odd = nums[i] % 2;
            int even = nums[j] % 2;
            if(odd && !even) {
                nums[i] ^= nums[j];
                nums[j] ^= nums[i];
                nums[i] ^= nums[j];
                --j;
                ++i;
            }
            else if(odd)    --j;
            else ++i;
            
        }
        return nums;
}