class Solution {
public:
    int reverse(int x) {
        if(x == 0) return 0;
        if(x == -2147483648) return 0;
        int res = 0;
        int i = (log10(abs(x)) + 1);
        bool sign;
        
        if(x < 0) sign = true;
        else sign = false;
        
        return calculateWithSign(abs(x), i, sign);
    }
    
    int calculateWithSign(int x, int i, bool sign){
        int res = 0;
        while(i != 0)
        {        
            int rem = x%10;
            if(i == 10 && rem > 2) return 0;
            if(res < INT_MIN/10 || res > INT_MAX/10) return 0;       
            res = res*10 + rem;
            x/=10;
            i--;   
        }
        if(sign == true) return -1*res;
        else return res;
    }
    
};