class Solution {
public:
    string reverseWords(string s) {
         int i=0;
        string ans ="";
        int n=s.size();
       
        
        while(i<n){
            string sub="";
            
            while(i<n && s[i]==' ')
                i++;
            while(s[i]!=' ' && i<n){
                sub += s[i];
                i++;
            }
            
            if(sub.size()>0){
                if(ans.length() == 0)
                    ans = sub;
                else 
                    ans = sub+" "+ans;
            }
        }
        return ans;
        
    }
};