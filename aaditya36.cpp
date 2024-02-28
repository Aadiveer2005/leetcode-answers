class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>row;
         vector<int>column;
         vector<int>ans;
         int count1,count2,count3,count4;

        for(int i=0;i<grid.size();i++)
        {    count1=0;
        count2=0;
              for(int j=0;j<grid[0].size();j++)
              {
                  if(grid[i][j]==1)
                  count1++;
                  else
                  count2++;
              }
              row.push_back(count1-count2);
        }
          for(int j=0;j<grid[0].size();j++)
        {    count3=0;
        count4=0;
              for(int i=0;i<grid.size();i++)
              {
                  if(grid[i][j]==1)
                  count3++;
                  else
                  count4++;
              }
              column.push_back(count3-count4);
        }
           grid.clear();
        int sum=0;
          for(int j=0;j<row.size();j++)
        {    sum=0;
              for(int i=0;i<column.size();i++)
              {
                 sum=row[j]+column[i];
                 ans.push_back(sum);
                 sum=0;
              }
             grid.push_back(ans);
             ans.clear();
        }

       
        return grid;
    }
};