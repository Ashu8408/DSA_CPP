class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int m = matrix.size();
        int n = matrix[0].size();

        map<int, int> grid;
        
        for(int i=0; i<m; i++){
            int t=INT_MAX;
            
            for(int j=0; j<n; j++){
                
                if(matrix[i][j] < t)
                    t = matrix[i][j];
            }
            
            grid[t]++;
        }
        
        for(int j=0; j<n; j++){
            int t = INT_MIN;
            
            for(int i=0; i<m; i++){
                if(matrix[i][j]>t)
                    t = matrix[i][j];                    
            }
            
            grid[t]++;
        }
        
        vector<int> ans;
        for(auto x:grid){
            if(x.second>1)
                ans.push_back(x.first);
        }
        
        return ans;
    }
};