class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size();
        int n;
        
        int wealthy=0;
        
        for(int i=0; i<m; i++){
            n = accounts[i].size();
            int sum=0;
            for(int j=0; j<n; j++){
                sum+= accounts[i][j];
                
            }
            wealthy = max(sum, wealthy);
        }
        
        return wealthy;
            
        
    }
};