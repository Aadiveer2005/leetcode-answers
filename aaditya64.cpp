class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        unordered_set<int> m;
        for(int i = nums.size()-1; i>=0; i--){
            if(nums[i]<=k) m.insert(nums[i]);
            if(m.size() == k) return nums.size()-i;
        }
        return nums.size();
    }
};