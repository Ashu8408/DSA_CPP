class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        //
        unordered_map<char, int> rans;
        
        for(char c : magazine)
            rans[c]++;
        
        for(char c: ransomNote){
            if(rans[c] > 0)
                rans[c]--;      //eleminate common letter
            
            else
                return false;
            
        }
        
        return true;
    }
};