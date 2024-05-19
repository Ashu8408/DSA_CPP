class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            {return false;}
        if(x>=0&& x<10)
           { return true;
        }
        int temp=x;
        long long k=0;
        while(temp!=0){
            int digit= temp%10;
            k=k*10+digit;
            
            temp=temp/10;
        }
        if(x==k)
        {return true;}
        return false;

    }
};