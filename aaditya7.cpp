class Solution {
public:
    int balancedStringSplit(string s) {
        int count=0,i,count1=0;
        for(i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            count++;
            else
            count--;
            if(count==0)
            count1++;
        }
        return count1;
    }
};