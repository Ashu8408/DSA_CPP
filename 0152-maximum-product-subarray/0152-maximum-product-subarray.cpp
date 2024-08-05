class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int n=nums.size();
        long long p=1, q=1;
        long long ans=nums[0];
        
        for(int i=0; i<n; i++){
            if(p==0 || p<INT_MIN)
                p=1;
            if(q==0 || q<INT_MIN)
                q=1;
            
            p = p*nums[i];
            q = q*nums[n-i-1];
            
            ans = max(ans,max(p,q));
        }
        return ans;
    }
};