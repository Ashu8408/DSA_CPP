class Solution {
public:
    int minimumCost(vector<int>& cost) {
        
        int n = cost.size();
        sort(cost.begin(), cost.end(), greater<int>());
        
       // int p=0, q=n-1;
        int sum=0;
       
        for(int i=n-1; i>=0; i--){
            if(i%3 != 2){
                sum = sum+cost[i];
            }
        }
        
        return sum;

    }
};