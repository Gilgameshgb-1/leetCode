class Solution {
public:
    bool isPalindrome(int x) {
        if(x/10 == 0 && x < 0) return false;
        bool flagNegative = false;
        if(x < 0)
        {
            flagNegative = true;
            x = abs(x);
        }
        vector<int> arrVal;
        int c = 0;
        while(x!=0)
        {
            c++;
            int tmp = x%10;
            x/=10;
            if(x == 0 && flagNegative == true)
            {
                tmp*=-1;
            }
            arrVal.push_back(tmp);
        }
        int ctr = 1;
        for(int i = 0; i < c/2; i++)
        {
            if(arrVal[i] != arrVal[c-i-1]){
                return false;
            }
        }
        return true;
    }
};