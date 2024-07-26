class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int l=0, r=letters.size()-1;
        int mid;
        int ans=-1;
        
        while(l<=r){
            mid = l+(r-l)/2;
            if(letters[mid] > target){
                ans = mid;
                r=mid-1;
            }
            else{
                l = mid+1;
            }
        }
        
        if(ans == -1)
            return letters[0];
        return letters[ans];
        
    }
};