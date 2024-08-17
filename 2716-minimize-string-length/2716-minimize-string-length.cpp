class Solution {
public:
    int minimizedStringLength(string s) {
        
        
        unordered_set<char> ans;
        
        for(auto c:s)
            ans.insert(c);
        return ans.size();
    }
};