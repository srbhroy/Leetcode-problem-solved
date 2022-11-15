class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int siz = piles.size();
        long maxx = 0;
        for(long i : piles) maxx = max(maxx,i);
        long l = 1, r = maxx, k;
        while(l <= r)    {
            k = l + ((r - l) / 2); 
            long valid = 0;
        for(auto i : piles) {
            valid += (i / k);
            if(i % k != 0)  ++valid;
        }
            if(valid > h)   l = k + 1;
            else    {
                maxx = min(maxx, k);
                r = k - 1;
            }
        }
        return maxx;
    }
};