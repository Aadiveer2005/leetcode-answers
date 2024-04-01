class Solution {
public:
    int minSteps(string s, string t) {
        int sum=0;
        unordered_map<char,int>mp;
        for(auto it:s)
        mp[it]++;
         for(auto it:t)
         mp[it]--;
         for (auto it:mp)
         if(it.second>=0)
         sum+=it.second;
         return sum;

    }
};