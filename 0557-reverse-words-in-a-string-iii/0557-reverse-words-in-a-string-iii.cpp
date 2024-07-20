class Solution {
public:
    string reverseWords(string s) {
        
        int p=0;
        int n=s.size();
        
        for(int q=1; q<=n; q++)
            if(q==n || s[q]==' '){
                reverse(s.begin()+p, s.begin()+q);
                p=q+1;

            }
        return s;
    }
};