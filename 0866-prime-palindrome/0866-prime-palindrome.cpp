class Solution {
public:
  
bool isPrime(int num) {
    if (num <= 1) 
        return false;
    
    if (num == 2 || num == 3) 
        return true;
    
    if (num % 2 == 0 || num % 3 == 0) 
        return false;
    
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

        
bool isPalindrome(int num) {
    string str = to_string(num);
    int p = 0, q = str.length() - 1;
    while (p < q) {
        if (str[p] != str[q]) 
            return false;
        p++;
        q--;
    }
    return true;
}
        

// Function to find the smallest prime palindrome greater than or equal to n
int primePalindrome(int n) {
    while (true) {
        if (isPalindrome(n) && isPrime(n)) {
            return n;
        }
        n++;
        
        // Optimization: Skip even numbers > 2
        
        if (n > 2 && n % 2 == 0) 
            n++;
        // Special handling for the range of 8 digits
        if (n > 10000000 && n < 100000000) 
            n = 100000000;
    }
}

    
        
        
        
    
};