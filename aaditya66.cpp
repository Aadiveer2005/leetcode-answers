class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int sum=0; 
        sort(nums.begin(),nums.end()); 
        for(auto i:nums) 
        { 
            sum+=i;
        }  
        int count=0; 
        vector<int> ans;
        for(int i=nums.size()-1;i>=0;i--) 
        { 
            if(count>sum) 
            { 
                return ans;
            }
            else 
            { 
                count+=nums[i]; 
                sum-=nums[i]; 
                ans.push_back(nums[i]);
            }
        }
        return ans;
    }
};