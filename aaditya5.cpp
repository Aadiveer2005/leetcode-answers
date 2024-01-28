class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        int i,j;
        vector <int> ans;
        for(i=0;i<words.size();i++)
        {
              for(j=0;j<words[i].size();j++)
              {if(words[i][j]==x)
                { ans.push_back(i);
              break;}}
              
        }
        return ans;

    }
};