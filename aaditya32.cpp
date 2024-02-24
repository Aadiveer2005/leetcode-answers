class Solution {
public:
    int minPartitions(string n) {
        int maximum=0;
        for(auto i : n)
        {
            maximum= max(maximum,i-'0');
        }
        return maximum;
    }
};