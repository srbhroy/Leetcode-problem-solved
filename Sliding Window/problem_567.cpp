class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    int siz1 = s1.size(), siz2 = s2.size(), temp = 0, cc = 0;

    unordered_map<char,int> counttS2, counttS1;
    for(char i : s1)    ++counttS1[i];
    temp = counttS1.size();
    for(int i = 0; i < siz2; i++)    {
        ++counttS2[s2[i]];
        if(i >= siz1)   {
            --counttS2[s2[i - siz1]];
        }
        for(pair<char,int> j : counttS2)    {
            if(j.second > 0 && counttS1[j.first] == j.second)   {
                ++cc;
            }
        }
        if(cc == temp)  return true;
        else    cc = 0;
    }
    return false;
}
};