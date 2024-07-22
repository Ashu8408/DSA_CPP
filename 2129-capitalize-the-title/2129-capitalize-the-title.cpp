class Solution {
public:
    string capitalizeTitle(string title) {
        
        for (int i = 0, j = 0; i <= title.size(); i++) {
            
            if (i < title.size() && title[i] != ' ') {
                title[i] = tolower(title[i]);
                continue;
            }
            
            if (i-j > 2) {
                title[j] = toupper(title[j]);
            }
            j = i+1;
        }
        return title;
    }
};