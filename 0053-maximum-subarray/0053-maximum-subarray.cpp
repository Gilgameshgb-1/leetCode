class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max = 0;
        int prevMax = INT_MIN;
        for(int i = 0; i < nums.size(); i++)
        {
            max += nums[i];
            if(max >= prevMax)
            {
                prevMax = max;
            }
            if(max < 0)
            {
                max = 0;
            }
        }
        return prevMax;
    }
};