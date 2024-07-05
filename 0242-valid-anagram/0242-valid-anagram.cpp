class Solution {
public:
    bool isAnagram(string s, string t) {
        int s_len=s.length();
        if (s_len != t.length()) {
            return 0;
        }

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i=0;i<=s_len-1; i++){
            if(s[i]!=t[i])
                return 0;
            
        }
        return 1;

        
    }
};