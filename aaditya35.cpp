class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        for(int i=0;i<score.size();i++)
        {
              swap(score[i][k],score[i][0]);      
        }
        sort(score.rbegin(),score.rend());

         for(int i=0;i<score.size();i++)
        {
              swap(score[i][k],score[i][0]);      
        }
        return score;
    }
};