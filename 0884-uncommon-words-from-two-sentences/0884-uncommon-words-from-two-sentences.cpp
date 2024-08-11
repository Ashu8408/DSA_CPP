class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        
        unordered_map<string, int> mpp;
        vector<string> ans;
        string temp = s1 + " "+s2;
        string p="";
        
        for(int i=0; i<temp.size(); i++){
            if(temp[i] == ' '){
                mpp[p]++;
                p="";
            }
            
            else
                p += temp[i];
        }
        
        mpp[p]++;  //pushing the last word because there is no space at the end of scentence
        
        for(auto &itt : mpp){
            if(itt.second ==1)
                ans.push_back(itt.first);
        }
        
                
        return ans;
    }
};