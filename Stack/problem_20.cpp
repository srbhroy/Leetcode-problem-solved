class Solution {
public:
    bool isValid(string s) {
        stack<char> pile;
        for(auto i : s) {
            if(i == '(' || i == '{' || i == '[')
                pile.push(i);
            else    {
                if(pile.empty())   return false;
                char popped = pile.top();
                pile.pop();
                switch(i)  {
                    case ')':if(popped!='(') return false; break;
                    case '}':if(popped!='{') return false;  break;
                    case ']':if(popped!='[') return false; break;
                }
                
            }
        
        }
        return pile.empty()?true:false;
    }
};
