class Solution {
public:
    bool isHappy(int n) {
        int sum, x, rem;
        while (n > 9)
        {
            sum = 0;
            x = n;
            while (x)
            {
                rem = x % 10;
                sum += rem*rem;
                x /= 10; 
            }
            n = sum;
        }

        if (n == 1 || n == 7) return true;
        return false;
    }
};