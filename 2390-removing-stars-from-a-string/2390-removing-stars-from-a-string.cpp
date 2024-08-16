class Solution {
public:
    string removeStars(string s) {
        string result;
        
        for (char c : s) {
            if (c == '*') {
                // Remove the last character if '*' is encountered
                result.pop_back();
            } else {
                // Add the character to the result
                result.push_back(c);
            }
        }
        
        return result;
    }
};
