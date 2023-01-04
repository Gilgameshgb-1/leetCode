class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int index;
        int left = 0;
        int right = nums.size();
        while(left < right)
        {
            index = left + (right - left)/2;
            if(nums[index] == target) return index;
            if(nums[index] > target)
            {
                right = index;
            }else
            {
                left = index + 1;
            }
        }
        return left;
    }
};