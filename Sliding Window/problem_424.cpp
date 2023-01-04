class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = s.size() - 1, mid;
        while(l <= r)   {
            mid = l + (r - l) / 2;
            bool ans = false;
            unordered_map<char,int> countt;
            for(int i = 0; i < s.size(); i++)   {
                ++countt[s[i]];
                if(i > mid) {
                    --countt[s[i - mid - 1]];
                }
                unordered_map<char,int>::iterator best = max_element(countt.begin(),countt.end(),[] (const std::pair<char,     int>& a, const std::pair<char,int>& b)->bool{ return a.second < b.second; } );
                if(mid + 1 - best->second <= k) {
                    ans = true;
                    break;
                }
            }
            if(ans) {
                l = mid + 1;
            }
            else r = mid - 1;
        }
        return l;
    }
};