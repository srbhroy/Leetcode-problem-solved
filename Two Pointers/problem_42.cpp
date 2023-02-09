class Solution {
public:
    int trap(vector<int>& height) {
        int k = height.size() - 1, lmax = 0, rmax = 0, ans = 0;
        vector<int> left(k+1,0), right(k+1,0), res;
        for(int i = 0, j = k; i <= k && j >= 0; i++, j--)   {
            left[i] = max(height[i], lmax);
            if(lmax < height[i])    {
                lmax = height[i];
            }
            right[j] = max(height[j], rmax);
            if(rmax < height[j])    {
                rmax = height[j];
            }
        }
        for(int i = 0; i < left.size(); i++)    {
            ans += abs(min(left[i] , right[i]) - height[i]);
        }
        return ans;
    }
};