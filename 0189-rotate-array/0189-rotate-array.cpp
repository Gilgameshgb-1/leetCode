class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int e=nums.size();
        vector<int> a(e);
        for(int i=0 ; i<e ; i++){
            a[(i+k)%e]=nums[i];
        }
        nums=a;
    }
};