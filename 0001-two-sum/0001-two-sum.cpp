class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        for(int i = 0; i < nums.size(); i++)
        {
            int a = nums[i];
            for(int j = i+1; j < nums.size(); j++)
            {
                if((a + nums[j]) == target)
                {
                    v.push_back(i);
                    v.push_back(j);
                    return v;
                }
            }
        }
        v.push_back(-1);
        v.push_back(-1);
        return v;
    }
};