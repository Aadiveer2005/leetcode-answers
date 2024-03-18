class Solution {
public:
    string removeOuterParentheses(string s) {
        int total = 0;
        string ans = "";

        for(int i = 0; i < s.length(); i++){
            if(s[i] == '(' && total == 0){
                total++;
            }
            else if(s[i] == '(' && total > 0){
                ans += '(';
                total++;
            }
            else if(s[i] == ')' && total > 1){
                ans += ')';
                total--;
            }
            else{
                total--;
            }
        }

        return ans;
    }
};