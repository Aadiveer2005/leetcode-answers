class Solution {
public:
    vector<int> minOperations(string boxes) 
{
    int n = boxes.size();
    vector<int> res;
    int sum = 0, right = 0, left = 0;
    
    for(int i = 0; i < n; i++)
    {
        if(boxes[i] == '1')
        {
            sum += i;
            right++;
        }
    }
    
    for(int i = 0; i < n; i++)
    {
        res.push_back(sum);
        if(boxes[i] == '1')
        {
            right--;
            left++;
        }
        
        sum += left - right;
    }
    
    return res;
    }
};