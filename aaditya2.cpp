class Solution {
public:
    vector<int> sumZero(int n) {
            int m=n/2;
            vector <int>ans;
            if(m!=0)
            m=-m;
            if(n%2!=0){
            for(int i=m;i<=-m;i++)
            {
                ans.push_back(i);
            }}
            else
            { for(int i=m;i<=-m;i++)
            {     if(i==0) continue;
                ans.push_back(i);
            }}

            return ans;
    }
};