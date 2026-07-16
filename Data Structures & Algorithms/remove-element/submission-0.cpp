class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int count = 0;
        int index = 0;
        int i =0;
        while(i<nums.size())
        {
            if(nums[i]==val)
            {
                i++;
               
            }
            else
            {
            nums[index++] = nums[i++];
            count++;
            }

        }
        return count;
    }
};