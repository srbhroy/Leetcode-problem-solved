class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector<int> temp;
        set<int> c;
        for(int i : nums)   c.insert(i);
        for(int i : c)   temp.push_back(i);
        int i = 0, countt = 0, maxx = 0;
        if(temp.size() < 1)    return 0;
        if(temp.size() == 2) {
            if(temp[i+1] - temp[i] == 1)    return 2;
        }
        else if(temp.size() > 2)    {
            while(i < temp.size() - 1) {
                if(temp[i+1] - temp[i] == 1)  {
                    countt++;
                }
                else {
                    if(maxx < countt)    maxx = countt;
                    countt = 0;
                }
                ++i;
            }
            if(maxx < countt)    {
                maxx = countt;
            }
            return maxx < 1?++maxx:++maxx;
        }
        else    return 1;
        return 0;
    }
};