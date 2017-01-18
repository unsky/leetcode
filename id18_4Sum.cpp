class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
         vector<vector<int>> res;
         if(nums.size()<4)
         return res;

        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-3;i++)
        {for(int j=i+1;j<nums.size()-2;j++)
        {
            int k=j+1;
         int m=nums.size()-1;
            while(k<m)
            {
                if(nums[i]+nums[j]+nums[k]+nums[m]==target)
                {
                vector<int> vec;
                vec.push_back(nums[i]);
                vec.push_back(nums[j]);
                vec.push_back(nums[k]);
                vec.push_back(nums[m]);
                res.push_back(vec);
                m--;
                k++;
                 while(nums[k]==nums[k-1]&&k<nums.size()-1)
                {k++;}
                  while(nums[m]==nums[m+1]&&m>0)
                {m--;}
                }
                else if(nums[k]+nums[m]<target-nums[i]-nums[j])
                {k++;
                while(nums[k]==nums[k-1]&&k<nums.size()-1)
                {k++;}

                }
                else if(nums[k]+nums[m]>target-nums[i]-nums[j])
                {m--;
                 while(nums[m]==nums[m+1]&&m>0)
                {m--;}
                }
            }
            while(nums[j+1]==nums[j]&&j+1<nums.size()-1)
        {
            j++;
        }
        }
            while(nums[i+1]==nums[i]&&i+1<nums.size()-1)
        {
            i++;
        }

        }
        return res;

    }
};
