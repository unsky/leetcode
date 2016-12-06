class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()<2)
        return result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if ((i>0)&&nums[i]==nums[i-1]) continue;
          int left=i+1;
          int right=nums.size()-1;
          while(left<right)

          {
              if((nums[left]+nums[right])==(-1*nums[i]))
                { vector<int> vec;
                vec.push_back(nums[i]);
                vec.push_back(nums[left]);
                vec.push_back(nums[right]);
                result.push_back(vec);
                left++;
                right--;
                while(nums[left]==nums[left-1]) left++;

                while(nums[right]==nums[right+1]) right--;
                }
                else if((nums[left]+nums[right])<(-1*nums[i]))
                    left++;
                else  right--;


          }
        }
        return result;

    }
};
