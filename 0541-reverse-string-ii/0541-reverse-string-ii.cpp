class Solution {
public:
    string reverseStr(string s, int k) {
           int n = s.length();
        
         for (int i=0; i<n; i += 2*k) {
            int p = i;
            int q = min(i+k-1, n-1);
             
            while (p < q) {
                swap(s[p], s[q]);
                p++;
                q--;
            }
        }        
        return s;
    }
    
};