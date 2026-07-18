class Solution {
public:
    bool isPalindrome(string s) {
        string st;
        for(int i =0;i<s.size();i++)
        {
            char t = s[i];
            
            if(isalnum(t))st+=tolower(t);
        }
        string temp = st;
        reverse(temp.begin(),temp.end());
        return temp==st;
        
    }
};
