class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string ans = "";

    while (columnNumber > 0) {
        columnNumber--;  // Adjust the index to be 0-based''
        
        int remainder = columnNumber % 26;
        char currentChar = 'A' + remainder;
        ans = currentChar + ans;
        columnNumber /= 26;
    }

    return ans;
        
    }
};