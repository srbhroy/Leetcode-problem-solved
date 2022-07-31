class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        int size = strs.size()-1;
        vector<int> visit(size+1,0);
        int k = 0;
        unordered_map<char,int> pick[size+1];
        for(auto i:strs)    {
            for(auto j:i)   {
                pick[k][j]++;
            }
            ++k;
        }
        
        for(int i = 0; i <= size; i++)    {
            if(!visit[i])   {
                vector<string> temp;
                visit[i] = 1;
                temp.push_back(strs[i]);
                for(int j = i + 1; j <= size; j++)   {
                    if(pick[i] == pick[j] && !visit[j])  {
                        temp.push_back(strs[j]);
                        visit[j] = 1;
                    }
                }
                ans.push_back(temp);
            }
        }
        return ans;
    }
};