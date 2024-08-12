class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        //  answer[i] = ( multiply at left )* (  multiply at right )
        
        int n=nums.size();
        vector<int> answer(n);

        
        int p[n], q[n];
        p[0]=1;
        q[n-1]=1;
        
        for(int i=1; i<n; i++){
            p[i] = p[i-1] * nums[i-1];
        }
        for(int i=n-2; i>=0; i--){
            q[i] = q[i+1] * nums[i+1];
        }
        for(int i=0; i<n; i++){
            answer[i] = p[i]*q[i];
        }
        
        
        return answer;
        
    }
};