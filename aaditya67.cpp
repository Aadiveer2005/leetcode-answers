class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& p, vector<vector<int>>& q) {
        vector<int> v;
        for(int i=0; i<q.size(); i++){
            int count=0;
            for(int j=0; j<p.size(); j++){
                int coo1 = pow(p[j][0] - q[i][0], 2);
                int coo2 = pow(p[j][1] - q[i][1], 2);
                int radius = pow(q[i][2], 2);
                if(coo1 + coo2 <= radius) count++;
            }
            v.push_back(count);
        }
        return v;
    }
};