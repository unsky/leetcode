class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int num=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            nums[i-num]=nums[i];
            else
           num++;

        }
        return nums.size()-num;

    }
};
