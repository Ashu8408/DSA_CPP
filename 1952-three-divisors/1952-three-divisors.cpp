class Solution {
public:
    bool isThree(int n) {
        
        int c=1;
        
        for(int k=1; k <=n/2; k++ ){
            if( n % k ==0 )
                c+=1;
            
        }
        return (c == 3);
    }
            
};