class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int sum=0,i=0;
        int value=capacity;
        while(i<plants.size())
        {    
            if(value>=plants[i] && i<plants.size())
              {sum+=1;
               value-=plants[i];}
            else
            {sum+=i;
            sum+=i+1;
              value=capacity-plants[i];
            }
        i++;
        }
        return sum;

    }
};