class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        
        for(int i=0; i<n; i++){
            unordered_set<int> check1;
            
            for(int j=0; j<n; j++)
                check1.insert(matrix[i][j]);            
            
             if (check1.size() != n) 
            return false;
             
        }
        
        for(int j=0; j<n; j++){
            unordered_set<int> check2;
            
        for(int i=0; i<n; i++)
            check2.insert(matrix[i][j]);
            
             if (check2.size() != n) 
            return false;               
        
        
        
        }
        return true;
    }
};
