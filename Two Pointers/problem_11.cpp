class Solution {
public:
    int maxArea(vector<int>& height) {
        int siz = height.size();
        int i = 0, j = siz - 1, tot = 0, diff = 0;
        while(i < j)   {
            diff = (min(height[i],height[j])*(j - i));
            tot = tot < diff?diff:tot;
            if(height[i] <= height[j]) ++i;
            else    --j;
        }
        return tot;
    }
};