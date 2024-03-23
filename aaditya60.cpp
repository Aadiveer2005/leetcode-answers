class Solution {
private:

int fun(int n)
{  int maximum=INT_MIN;
   int count=0;
     while(n>0)
     {int m=n%10;
     count++;
     maximum=max(maximum,m);
     n/=10;}
     int ans=0;
     while(count--)
      ans=ans*10+maximum;
     return ans;


}



public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            sum+=fun(nums[i]);
        }
        return sum;
    }
};