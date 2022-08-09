class Solution {
public:
    bool isValid(string s) {
        stack<char> pile;
        for(auto i : s) {
            if(i == '(' || i == '{' || i == '[')
                pile.push(i);
            else    {
                char popped = pile.top();
                pile.pop();
                switch(i)  {
                    case ')':if(popped!='(') return false;
                    case '}':if(popped!='{') return false;
                    case ']':if(popped!='[') return false;
                }
                
            }
        
        }
        return true;
    }
};
