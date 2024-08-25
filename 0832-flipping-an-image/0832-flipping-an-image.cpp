class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        
        int n = image.size();
        
        for(int i=0; i<n; i++){
            
            int p=0, q=n-1;
                 
                while(p<=q){
                swap(image[i][p], image[i][q]);
               
                if(image[i][p] ==0)
                    image[i][p] =1;
                else
                    image[i][p]=0;
                    
                //image[i][p] = image[i][p] == 0 ? 1:0;
                    
                    if (p != q) {
                        
                        if(image[i][q] ==0)
                    image[i][q] =1;
                else
                    image[i][q]=0;
                        
                    //image[i][q] = image[i][q] == 0 ? 1:0;
                }
                    
                    p++;
                    q--;
                        
            
                }
                
            
        }
        
        return image;
        
    }
};