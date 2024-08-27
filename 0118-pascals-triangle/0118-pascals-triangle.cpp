class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> ans;
        ans.push_back(vector<int>(1,1));
        
        for(int i=0; i<numRows-1; i++){
            vector<int> subBlock;
            subBlock.push_back(1);
            
            for(int j=0; j<ans[i].size()-1; j++){
                subBlock.push_back(ans[i][j] + ans[i][j+1]);
            }
            subBlock.push_back(1);
            ans.push_back(subBlock);
        }
       
        
        return ans;
    }
};