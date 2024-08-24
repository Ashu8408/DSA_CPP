class Solution {
public:
    int diagonalPrime(vector<vector<int>>& nums) {
        
        int maxPrime = 0;
        
        int n= nums.size();
        for(int i=0; i<n; i++){
            if(isPrime(nums[i][i]))
                maxPrime = max( maxPrime, nums[i][i]);         
            
            if(isPrime(nums[i][n-1-i]))
                maxPrime = max( maxPrime, nums[i][n-1-i]); 
               }
                        
            
        
        return maxPrime;
        
    }
    
    
    bool isPrime(int num) {
        if (num <= 1) return false;
        if (num == 2 || num == 3) return true;
        if (num % 2 == 0 || num % 3 == 0) return false;
        
        for (int i = 5; i * i <= num; i += 6) {
            if (num % i == 0 || num % (i + 2) == 0)
                return false;
        }
        return true;
    }
    
    
};