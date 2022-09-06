class KthLargest {
private:
    int k;
    priority_queue<int,vector<int>,greater<int> > num;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for(auto i : nums)  {
            num.push(i);
        }
        while(num.size() > this->k) {
            num.pop();
        }
    }
    
    int add(int val) {
        num.push(val);
        while(num.size() > k) {
            num.pop();
        }
        return num.top();
    }
};
