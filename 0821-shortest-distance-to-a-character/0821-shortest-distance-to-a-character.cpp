class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        std::vector<int> result(n, n);  // Initialize distances with a large number (n)

        // First pass: left to right
        int position = -n;  // A position far to the left
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                position = i;
            }
            result[i] = std::min(result[i], std::abs(i - position));
        }
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c) {
                position = i;
            }
            result[i] = std::min(result[i], std::abs(i - position));
        }

        return result;
    
        
    }
};