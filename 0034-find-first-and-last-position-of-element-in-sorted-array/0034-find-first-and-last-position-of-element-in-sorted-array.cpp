class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> ans(2, -1);
        ans[0] = findleft(nums, target);
        ans[1] = findright(nums, target);
        return ans;
    }
    
    int findleft(const vector<int>& nums, int target) {
        int n=nums.size();
        int low=0, high=n-1;
        int left=-1;
        
        while(low<=high){
            int mid = low+ (high-low)/2;
            
            if(nums[mid]==target){
                left = mid;
                high = mid-1;// Move left to find the last occurrence
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else
                high = mid-1;
        }        
        return left;               
    }
    
        int findright(const vector<int>& nums, int target) {
            int n=nums.size();
            int low = 0, high = n-1;
            int right = -1;
            
            while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                right = mid;
                low = mid + 1; // Move right to find the last occurrence
            } else if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return right;
        }

};