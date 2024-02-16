class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int i,sum=0;
         for(i=0;i<boxTypes.size();i++)
         swap(boxTypes[i][0],boxTypes[i][1]);
         sort(boxTypes.rbegin(),boxTypes.rend());
          for(i=0;i<boxTypes.size();i++)
          {    if(truckSize>boxTypes[i][1])
             { sum+=(boxTypes[i][0]*boxTypes[i][1]);
              truckSize-=boxTypes[i][1];}
              else
              { sum+=boxTypes[i][0]*truckSize;
              break;}
          }
          return sum;


          }
};