class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        unordered_set<char> row1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
        unordered_set<char> row2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
        unordered_set<char> row3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};
        
        vector<string> result;
        
        for (const string& word : words) {
            if (isInOneRow(word, row1) || isInOneRow(word, row2) || isInOneRow(word, row3)) {
                result.push_back(word);
            }
        }
        
        return result;
    }
    
    
private:
    bool isInOneRow(const string& word, const unordered_set<char>& row) {
        for (char ch : word) {
            if (row.find(tolower(ch)) == row.end()) {
                return false;
            }
        }
        return true;
    }
};