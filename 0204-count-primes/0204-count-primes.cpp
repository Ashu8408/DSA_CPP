class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false;  // 0 and 1 are not primes

        for (int i = 2; i * i < n; ++i) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (isPrime[i]) {
                ++count;
            }
        }

        return count;
    }
};

    
    
    
    
    
    
    
    
    
    
    
    
    /*
    Time limit exceedes
    int countPrimes(int n) {
                
        int  c=0; 
        
        for(int i=0; i<n; i++)
        if(isPrime(i))
            c++;
        
        return c;
        
    }
    
    bool isPrime(int n) {
    if (n <= 1)
        return false;
    if (n == 2 || n == 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}
};
*/