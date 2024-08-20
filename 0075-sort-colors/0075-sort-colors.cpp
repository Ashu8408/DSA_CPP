class Solution {
public:
    void sortColors(vector<int>& nums) {
        // this problem is also known as Dutch National Flag problem
        
        int n=nums.size();
        int p=0, q=n-1, mid=0;
        
        while(mid<= q){
        switch(nums[mid]){
            case 0:
                swap(nums[p], nums[mid]);
                p++;
                mid++;
                break;
            
            case 1:
                mid++;
                break;
                
            case 2:
                swap(nums[mid], nums[q]);
                q--;
                break;
            
              }
        }
        
        
    }
};