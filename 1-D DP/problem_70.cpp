class Solution {
public:
    int climbStairs(int n) {
        
        int a[2];
        a[0] = 1;
        a[1] = 2;
        int c;
            if(n < 3)  return a[n - 1];
            else {
                for(int i = 3; i <= n; i++) {
                    c = a[0] + a[1];
                    a[0] = a[1];
                    a[1] = c;
                }
            }
        return c;
    }
};
