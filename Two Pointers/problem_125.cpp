class Solution {
public:
    bool isPalindrome(string s) {
        int siz = s.size();
        int i = 0, j = siz - 1;
        while(i < j)    {
            int char_i = s[i], char_j = s[j];
            if(!((char_i >= 65 && char_i <=90) || (char_i >= 97 && char_i <= 122) || (char_i >= 48 && char_i <= 57))) {
                ++i;
                continue;
            }
            if(!((char_j >= 65 && char_j <=90) || (char_j >= 97 && char_j <= 122) || (char_j >= 48 && char_j <= 57)))   {
                --j;
                continue;
            }
            if(tolower(s[i]) == tolower(s[j]))  {
                ++i;
                --j;
                continue;
            }
            return false;
        }
        return true;
    }
};
