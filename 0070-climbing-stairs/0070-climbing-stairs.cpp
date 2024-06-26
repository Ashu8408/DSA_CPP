class Solution {
public:
    int climbStairs(int n) {       
        
        if (n <= 1) return 1;
        int k = 1, l = 1, r = 0;
        for (int i = 2; i <= n; i++) {
            r = k + l;
            k = l;
            l = r;
        }
        return r;
        
        
    }
};