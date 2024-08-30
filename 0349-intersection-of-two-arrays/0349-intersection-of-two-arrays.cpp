class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set(nums1.begin(), nums1.end());
        unordered_set<int> resultSet;
    
    for (int num : nums2) {
        if (set.find(num) != set.end()) {
            resultSet.insert(num);
        }
    }
    
    return vector<int>(resultSet.begin(), resultSet.end());
}
        
    
};