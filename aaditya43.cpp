class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int>mp;
        for(auto it:arr)
        mp[it]++;
        int l=0;
        for(int i=0;i<arr.size();i++)
        {
            if(mp[arr[i]]==1 )l++;
            if(k==l)return arr[i];
        }
        return "";
    }
};