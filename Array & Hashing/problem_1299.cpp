class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        int n=arr.size();
        if(n==1){
            arr[0]=-1;
            return arr;
        }
        vector<int> ab(n,-1);
        int mx=arr[n-1];
        
        for(int i=n-1;i>0;i--){
            mx=max(mx,arr[i]);
            ab[i]=mx;
        }
        vector<int> ans(n,-1);
        ans[n-1]=-1;
        for(int i=n-2;i>=0;i--){
            ans[i]=ab[i+1];
        }
        return ans;
    }
};