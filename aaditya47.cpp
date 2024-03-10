class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int count1=0;
        int count2=0;
        int maximum=-1;
          for(int i=0;i<mat.size();i++)
          {   count1=0;
              for(int j=0;j<mat[i].size();j++)
              {
                  if(mat[i][j]==1)
                  count1++;
              }
              if(count1>maximum)
              {
                  maximum=count1;;
                  count2=i;
              }
          }
          return{count2,maximum};
    }
};