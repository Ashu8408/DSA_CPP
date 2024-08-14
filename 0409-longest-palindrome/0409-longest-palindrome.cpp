class Solution {
public:
    int longestPalindrome(string s) {
        
        unordered_map <char, int> mapp;
        int n = s.size();
        int l=0;
        bool isOdd = false;
        
        for(char c : s) {
            mapp[c]++;
        }
        
        
        for (auto& entry : mapp) { // Get the current key-value pair (character and its frequency)
            
            if(entry.second % 2 == 0){                // If the frequency is even, add it to the length
                l += entry.second;
            }
            
           else{                   // If the frequency is odd, add the largest even number possible (entry.second - 1)

                l += entry.second-1;
                isOdd = true;
            }
        }
        
        if(isOdd == true)
            l++;
        
        return l;
        
    }
};