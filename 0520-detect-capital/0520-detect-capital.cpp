class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int c=0;
        char bb;
        for(int i=0; i<=n; i++){           
            if(isupper(word[i])){
                c++;
            }
        }
        if(c==n || c==0)
            return true;
        
        if(c==1 && isupper(word[0])){
            return true;
        }
        return false;
        
    }
};