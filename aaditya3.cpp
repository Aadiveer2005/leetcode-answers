class Solution {
public:
    int firstMissingPositive(vector<int>& nums) 
    {
        int n = nums.size(),i;
        for( i = 0; i < n; i++)
           { if(nums[i] < 0)
              nums[i] = 0;}

        int flag = 0;
        for(auto it: nums)
        {
            if(it == 1)
              { flag=1;
               break;}
        }
        if(flag == 0)
            return 1;

        sort(nums.begin(), nums.end());
        for( i = 1; i < n; i++)
        {
            if(nums[i] - nums[i-1] > 1)   
                break;
        } 

        return nums[i-1]+1;
    }};
