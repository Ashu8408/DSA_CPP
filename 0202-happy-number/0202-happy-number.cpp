class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> temp;
        while (n != 1 && temp.find(n) == temp.end()) {
            temp.insert(n);
            n = sum_sq(n);
            
        }
        return n == 1;
        
    }
        
    int sum_sq(int n) {
        int sum = 0;
        while (n > 0) {
            int rem = n % 10;
            sum += rem * rem;
            n /= 10;
        }
        return sum;
        
        
    }
    
};