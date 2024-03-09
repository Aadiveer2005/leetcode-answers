class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector <int>ans;
        int maximum=arr[arr.size()-1];
        ans.push_back(-1);
        for(int i=arr.size()-2;i>=0;i--)
        {     ans.push_back(maximum);
              maximum=max(maximum,arr[i]);
        }
         reverse(ans.begin(),ans.end());
        return ans;


      
    }
};