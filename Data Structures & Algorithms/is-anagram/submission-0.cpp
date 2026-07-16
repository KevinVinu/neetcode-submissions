class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> smp;
        unordered_map<char,int> tmp;
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++)
        {
            smp[s[i]]++;

        }
        for(int i=0;i<t.size();i++)
        {
            tmp[t[i]]++;

        }
        for(int i=0;i<s.size();i++)
        {
            if(smp[s[i]]!=tmp[s[i]])return false;
        }
        return true;
        
    }
};
