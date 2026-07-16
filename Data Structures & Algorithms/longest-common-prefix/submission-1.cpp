class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {

        string ans = "";
        int index = 0;
        int j =1;

        for(int i = 0;i<str[0].size();i++)
        {
            char letter = str[0][i];
            bool check = 1;
            int j =1;
            while(j<str.size())
            {
                if(i < str[j].size() && str[j][i]==letter)
                {
                    j++;

                }
                else
                {
                    check = 0;
                    break;
                }
                
                
            }
            if(check)
            {
                ans+=letter;
            }
            if(!check)
            {
                break;
            }
            

        }


    
        return ans;
        
    }
};