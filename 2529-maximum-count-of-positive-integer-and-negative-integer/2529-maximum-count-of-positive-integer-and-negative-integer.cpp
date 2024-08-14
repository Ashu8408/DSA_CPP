class Solution {
public:
    int maximumCount(vector<int>& nums) {

        int p=0, n=0;
        int ne= nums.size();
        
        for(int i=0; i<ne; i++){
            if(nums[i] <0)
                n++;
            if(nums[i] >0)
                p++;
        }
        return max(p, n);
    }
};