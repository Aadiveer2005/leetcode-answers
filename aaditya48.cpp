class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        int i,j,a,count,maximum=INT_MIN;
         for(i=0;i<grid.size();i++)
         {   count=0;
             for(j=0;j<grid[i].size();j++)
             {
                 if(grid[i][j]==1)
                 count++;
             }
             if(count>maximum)
            { maximum=count;
             a=i;}
         }
         return a;
    }
};