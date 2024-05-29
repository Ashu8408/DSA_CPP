class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();
        std::vector<int> result(n, n);  
        
        int position = -n;  
        for (int i = 0; i < n; ++i) {
            if (s[i] == c) {
                position = i;
            }
            result[i] = std::min(result[i], std::abs(i - position));
        }

        position = 2 * n; 
        for (int i = n - 1; i >= 0; --i) {
            if (s[i] == c) {
                position = i;
            }
            result[i] = std::min(result[i], std::abs(i - position));
        }

        return result;
    
        
    }
};