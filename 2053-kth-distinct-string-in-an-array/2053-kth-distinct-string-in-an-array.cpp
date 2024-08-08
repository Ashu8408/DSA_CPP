class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n=arr.size();
        
        unordered_set<string> dist;
        unordered_set<string> dupli;
        
        for (int i = 0; i < n; i++) {
            string str = arr[i];  // Get the current element from the array
            if(dupli.count(str))
                continue;
            
            if(dist.count(str)){
                dist.erase(str);
                dupli.insert(str);
            }
            
            else{
                dist.insert(str);
            }
                
            //frequency[str] = frequency[str] + 1;  // Increment its count in the frequency map
        }
        
        for(int i = 0; i < n; i++) {
            string str = arr[i];
            if(!dupli.count(str))
                k--;
            
            if(k==0){
                return str;
            }
        }
        
        return "";
        
    }
};