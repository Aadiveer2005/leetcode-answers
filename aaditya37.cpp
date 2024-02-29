class Solution {
public:
    string generateTheString(int n) {
       string  ans="";
        if(n%2!=0)
        {
            while(n--)
           ans+='a';
        }
        else
        {   n--;
            while(n--)
           ans+='a';
           ans+='b';
        }
        return ans;


    }
};