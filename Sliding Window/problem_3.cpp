class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> hash;
        int count = 0, maxx = 0;
        for(int i = 0; i < s.size(); i++)   {
            char c = s[i];
            if(hash.find(c) == hash.end())  {
                hash[c] = i;
                ++count;
            }
            else    {
                maxx = (count > maxx)?count:maxx;
                count = 0;
                i = hash[c];
                hash.clear();
                //++hash[c];
                //++count;
            }
        }
        return (count > maxx)?count:maxx;
}
    
};
