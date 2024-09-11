class Solution {
public:
    int titleToNumber(string columnTitle) {
    int ans = 0;
    for (char c : columnTitle) {
        ans = ans * 26 + (c - 'A' + 1);  // Convert character to a number and update the result
    }
    return ans;
    }
};