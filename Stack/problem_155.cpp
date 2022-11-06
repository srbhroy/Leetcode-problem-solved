class MinStack {
    vector<int> arr;
    vector<int> minimum;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(minimum.empty()) {
            minimum.push_back(val);
            arr.push_back(val);

        }
        else if(val <= minimum.back())   {
            minimum.push_back(val);
            arr.push_back(val);
        }
        else arr.push_back(val);
    }
    
    void pop() {
        if(arr.back() == minimum.back())    minimum.pop_back();
        arr.pop_back();
    }
    
    int top() {
        return arr.back();
    }
    
    int getMin() {
        return minimum.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
