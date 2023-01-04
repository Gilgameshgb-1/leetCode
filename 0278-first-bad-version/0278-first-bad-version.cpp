// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int index = n/2;
        int left = 1;
        int right = n;
        while(left < right)
        {
            index = left + (right - left)/2;
            if(isBadVersion(index) == false) left = index + 1;
            else right = index;
        }
        return left;
    }
};