class Solution {
public:
    int countElements(vector<int>& nums) {
        
        int n=nums.size(),c=0;
        
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i] < nums[n-1] && nums[i]>nums[0])
            c++;
        }
        return c;
        
    }
};