class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& n1, vector<vector<int>>& n2) {
        vector<vector<int>>v;
        int i =0 ; int j = 0;

        while (i < n1.size() || j < n2.size()) {
            if (i < n1.size() && j < n2.size() && n1[i][0] == n2[j][0]) {
                v.push_back({n1[i][0], (n1[i][1] + n2[j][1])});
                i++;
                j++;
            } else if (j == n2.size() || i < n1.size() && n1[i][0] < n2[j][0]) {
                v.push_back(n1[i]);
                i++;
            } else {
                v.push_back(n2[j]);
                j++;
            }
        }
        return v;
    }
};