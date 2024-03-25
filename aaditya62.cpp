class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.rbegin(),piles.rend());
        int n=piles.size()/3,i=1,sum=0;
        while(n--){
            sum+=piles[i];
            i=i+2;
        }
        return sum;
    }
};