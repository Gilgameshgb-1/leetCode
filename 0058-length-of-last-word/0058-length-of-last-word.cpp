class Solution {
public:
    int lengthOfLastWord(string s) {
        int lastWordLength = 0;
        int i = s.length();
        bool flagFirst = false;
        while(i >= 0)
        {
            if(s[i] >= 65 && s[i] <= 90 || s[i] >= 65 && s[i] >= 97 && s[i] <= 122)
            {
                if(lastWordLength == 0) flagFirst = true;
                lastWordLength++;
            }else if(flagFirst == true)
            {
                break;
            }
            i--;
        }
        return lastWordLength;
    }
};