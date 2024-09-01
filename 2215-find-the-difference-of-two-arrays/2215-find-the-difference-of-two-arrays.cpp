class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> setNum1(nums1.begin(), nums1.end());
        unordered_set<int> setNum2(nums2.begin(), nums2.end());
        
        vector<vector<int>> ans(2);
        
        
        for (int x : setNum1) {
            if (!setNum2.contains(x)) {
                ans[0].push_back(x);
            }
        }
        
        
        for (int x : setNum2) {
            if (!setNum1.contains(x)) {
                ans[1].push_back(x);
            }
        }
        return ans;
    }
};