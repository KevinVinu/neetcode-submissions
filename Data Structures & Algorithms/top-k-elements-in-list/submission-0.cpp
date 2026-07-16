class Solution {
public:
    void top_k(unordered_map<int,int> &mp, vector<int> &ans)
    {
        int max_val = INT_MIN;
        for(auto &x: mp)
        {
            max_val = max(max_val, x.second);
        }
        int max_num = INT_MIN;

        for(const auto& [key,val]: mp)
        {
            if(val==max_val)
            {
                max_num = key;
                break;
            }

        }
        mp.erase(max_num);
        ans.push_back(max_num);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(int i=0;i<k;i++)
        {
            top_k(mp,ans);
        }
        return ans;
        
    }
};
