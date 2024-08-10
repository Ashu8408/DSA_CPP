class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string, int> w1;
        unordered_map<string, int> w2;
        
        for(int i=0; i<words1.size(); i++){
            string strr = words1[i];
            w1[strr]+=1;
        }
        for(int i=0; i<words2.size(); i++){
            string strr = words2[i];
            w2[strr]+=1;
        }
        int c=0;
        
        for (auto it = w1.begin(); it != w1.end(); ++it) {
            std::string word = it->first;  // Get the word from the current element
            int freq = it->second;         // Get the frequency of the word

    if (freq == 1 && w2[word] == 1) {  // checking presence of word in both maps
        c++; 
    }
        }
        return c;
        
    }
};