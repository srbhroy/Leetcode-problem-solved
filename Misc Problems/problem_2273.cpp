class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        unordered_map<string,string> mp;
        vector<string> result;
        string n = "1111";
        for(int i = 0; i < words.size(); i++) {
            string s = words[i];
            sort(s.begin(),s.end());
            if(mp.find(s) == mp.end())  {
                mp[s] = words[i];
                result.push_back(words[i]);
            }
            else if(n != s)   {
                result.push_back(words[i]);
            }
            n = s;
        }
        return result;
    }
};