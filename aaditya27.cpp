class Solution {
public:
    int solve(vector<int>& nums) {
          int n=nums.size();
        int prev=nums[0];
        int prev2=0;
        for(int i=1;i<n;i++)
        {
            int take=nums[i];
            if(i>1) take+=prev2;
            int nottake=0+prev;
            int curi=max(take,nottake);
            prev2=prev;
            prev=curi;
        }
        return prev;
    }
    int rob(vector<int>& nums) {
        int index = nums.size() ;
        if(index == 1){
            return nums[0];
        }
        vector<int>temp1,temp2;
        for(int i=0;i<=index-1;i++)
       { if(i!=0)temp1.push_back(nums[i]);
         if(i!=index-1)temp2.push_back(nums[i]);}
     
        return max(solve(temp1),solve(temp2));
    }
};