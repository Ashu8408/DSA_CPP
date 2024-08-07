class Solution {
public:
    
    void rotate(vector<vector<int>>& matrix) {
        int n= matrix.size();
        
        for(int i=0; i< n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }  
    }
    
    bool check(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat.size(); j++){
                if(mat[i][j] != target[i][j])
                    return false;
            }            
        }
        return true;        
    }
    
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        for(int i=0; i<4; i++){
            if(check(mat,target)){
                return true;
            }
            rotate(mat);
        }
        
        return false;
        
    }
};