class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int i,j,sum=0,count=0;
        for( i=0;i<nums.size();i++)
        {    count=0;
             j=i;
            while(j>0)
            {int n=j%2;
            if(n!=0)
             count++;
            j/=2;}
            if(count==k)
            { sum+=nums[i];}
        }
        return sum;
    }
};