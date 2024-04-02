class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int sum=0,a=0,b=0;
        for(int i=0;i<bank.size();i++)
        {
            for(int j=0;j<bank[i].size();j++)
            {if(bank[i][j]=='1')
            a++;}
            sum+=b*a;
            if(a!=0)
           { b=a;
           a=0;}
        }
        return sum;
    }
};