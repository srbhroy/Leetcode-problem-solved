class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> reverse;
    int temp1,temp2;
    for(auto i : tokens){
        if(i == "+")  {
            temp1 = (reverse.top());
            reverse.pop();
            temp2 = (reverse.top());
            reverse.pop();
            reverse.push(temp1 + temp2);
        }
        else if(i == "-")  {
            temp1 = (reverse.top());
            reverse.pop();
            temp2 = (reverse.top());
            reverse.pop();
            reverse.push(temp2 - temp1);
        }
        else if(i == "/")  {
            temp1 = (reverse.top());
            reverse.pop();
            temp2 = (reverse.top());
            reverse.pop();
            reverse.push(temp2 / temp1);
        }
        else if(i == "*")  {
            temp1 = (reverse.top());
            reverse.pop();
            temp2 = (reverse.top());
            reverse.pop();
            reverse.push(temp1 * temp2);
        }
        else
            reverse.push(stoi(i));
    }
    return reverse.top();
    }
};