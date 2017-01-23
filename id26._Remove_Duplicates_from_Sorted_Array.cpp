class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=1)
        return nums.size();
        int num=0;
        for(int i=1;i<nums.size(); i++)
        {
            if(nums[i]!=nums[i-1])
           {
           num++;
           nums[num]=nums[i];
           }
    }
        return num+1;

    } 
};
