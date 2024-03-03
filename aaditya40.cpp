class Solution {
public:
    string reverseVowels(string s) {
      int i=0;
      int j=s.size()-1;
      while(i<=j)
      {   int flag1=0,flag2=0;
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'  )
          flag1=1;
          else
          i++;
            if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u' || s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U'  )
            flag2=1;
            else
            j--;
            if(flag1==1 && flag2==1)
           { swap(s[i],s[j]);
            i++;j--;}

      }
      return s;
    }
};