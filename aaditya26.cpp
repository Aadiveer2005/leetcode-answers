class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        vector<int>ans;
        set<int>st;
        unordered_map<int,int>mp;
          for(auto it:nums1)
          st.insert(it);
          for(auto it:st)
          mp[it]++;

          st.clear();

         for(auto it:nums2)
          st.insert(it);
          for(auto it:st)
          mp[it]++;

           st.clear();

         for(auto it:nums3)
          st.insert(it);
          for(auto it:st)
          mp[it]++;
          
        for(auto it:mp)
        if(it.second>=2)
        ans.push_back(it.first);

        return ans;
    }
};