class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums = arr; //array copy;
        map<int, int> rank; //new map of elelmant and rank pair;
        int r=1;
        
        sort(nums.begin(), nums.end());
        
        for (int num : nums) {
            if (rank.find(num) == rank.end()) {
                rank[num] = r++;
            }
        }
        
         for (int& num : arr) {
            num = rank[num];
        }
            
        return arr;
    }
};