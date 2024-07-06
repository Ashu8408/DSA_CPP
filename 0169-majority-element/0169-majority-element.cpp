class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int k=nums.size();
        return nums[k/2];
        
    }
};