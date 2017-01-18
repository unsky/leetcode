class Solution {
public:
int threeSumClosest(vector<int>& nums, int target) {
    if(nums.size()==0)
    return 0;
    int res=0;
    int interval=0;
    sort(nums.begin(),nums.end());
    res=nums[0]+nums[1]+nums[nums.size()-1];
    interval=abs(target-res);
    for(int i=0;i<nums.size()-2;i++)
    {
      int j=i+1,k=nums.size()-1;
        while(j!=k)
    {
        if(nums[i]+nums[j]+nums[k]==target)
          return target;
        else if(nums[i]+nums[j]+nums[k]<target)
        {
         if(target-nums[i]-nums[j]-nums[k]<interval)
        {interval=abs(target-nums[i]-nums[j]-nums[k]);
        res=nums[i]+nums[j]+nums[k];
        }
      j++; }
        else if(nums[i]+nums[j]+nums[k]>target)
        {
        if(nums[i]+nums[j]+nums[k]-target<interval)
        {interval=abs(nums[i]+nums[j]+nums[k]-target);
        res=nums[i]+nums[j]+nums[k];
      } k--;}
    }
    }
    return res;
}
};
