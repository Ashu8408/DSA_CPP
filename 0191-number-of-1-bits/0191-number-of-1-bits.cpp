class Solution {
public:
    int hammingWeight(int n) {
        int c = 0;
        for (; n; n &= n - 1) {
            c++;
        }
        return c;
    }
};
        
    