class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        int ans=0;
        int maximum=INT_MIN;
        for(int i=0;i<grid.size();i++)
        {
            sort(grid[i].begin(),grid[i].end());
        }
          for(int i=0;i<grid[0].size();i++)
           { maximum=INT_MIN;
            for(int j=0;j<grid.size();j++)
            {
            // ans+=max(grid[0][0],grid[1][0]);
             //  ans+=max(grid[0][1],grid[1][1]);
              //   ans+=max(grid[0][2],grid[1][2]);
                    maximum=max(maximum,grid[j][i]);
           }
           ans+=maximum;}
   return ans;
    }
};