class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int pos=0;
        int n=nums.size();
        cout<<n;
        
        for(int i=0; i<n; i++){         // to fill non-zero numbers
            if(nums[i] != 0 ){
                nums[pos] = nums[i];
                pos +=1;
            }
        }
        
        while(pos < n){
                nums[pos++] = 0;
            }
        
        
    }
};