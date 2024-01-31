class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size()/2,sum=0;
        map<int,int>mp;
        for(auto it:nums)
            mp[it]++;
              for(auto it:mp)
              sum+=it.second/2;

              if(sum==n)
              return true;
              else
              return false;
        
    }
};