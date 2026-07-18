class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;

        unordered_set<int> st(nums.begin(), nums.end());

        int mx = 1;

        for(int i = 0; i < nums.size(); i++) {

            if(st.find(nums[i] - 1) == st.end()) {

                int temp = nums[i];
                int count = 0;

                while(st.find(temp) != st.end()) {
                    count++;
                    temp++;
                }

                mx = max(mx, count);
            }
        }

        return mx;
    }
};