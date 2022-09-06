class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> num(stones.begin(),stones.end());
        int x,y;
        while(num.size() > 1)   {
            x =  num.top();
            num.pop();
            y =  num.top();
            num.pop();
            if(x != y)  {
                num.push(x - y);
            } 
        }
        return num.size() ? num.top() : 0;
    }
};
