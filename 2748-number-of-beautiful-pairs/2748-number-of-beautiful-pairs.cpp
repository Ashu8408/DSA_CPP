class Solution {
public:
    int countBeautifulPairs(vector<int>& nums) {
        
        int c[10]{};
        
        int ans = 0;
        for (int x : nums) {
            for (int y = 0; y < 10; ++y) {
                if (c[y] && gcd(x % 10, y) == 1) {
                    ans += c[y];
                }
            }
            while (x > 9) {
                x /= 10;
            }
            c[x]++;
        }
        return ans;
    }
};