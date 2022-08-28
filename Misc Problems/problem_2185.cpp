class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int countt = 0;
        for(auto i : words) {
            bool flag = 0;
            int j = 0;
            for(j= 0; j < pref.size()  && i.size() >= pref.size(); j++)   {
                int k = 0;
                if(i[j] != pref[j]) break;
            }                             
            if(j == pref.size())  countt++;
        }
        
        return countt;
    }
};
