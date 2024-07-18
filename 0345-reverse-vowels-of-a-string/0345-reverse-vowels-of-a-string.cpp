class Solution {
public:
    
     bool vow(string s, char v){
         v=tolower(v);
            if(v=='a' || v=='e' || v=='i' || v=='o' || v=='u')
                return true;
         return false;

        }
    
    
    string reverseVowels(string s) {
        int n=s.length();
        int p=0;
        int q=n-1;
        
        while(p<q){
            if(!vow(s,s[p])){
                p++;
            }
            if(!vow(s,s[q])){
                q--;
            }
            if(vow(s,s[p]) && vow(s,s[q])){
                swap(s[p],s[q]);
                p++;
                q--;
            }
        }
        return s;
    }
};