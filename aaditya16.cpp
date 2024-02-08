class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
         int i,j,count=0,sum=0;;
         for( i=0;i<nums.size();i++)
         {  sum=0;
         j=i;
          while(j<nums.size())
             {sum+=nums[j];
             j++;
             if(sum==k)
             count++;}
         }
         return count;
    }
};