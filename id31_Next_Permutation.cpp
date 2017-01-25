//排列问题，cpp有标准函数next_permutation;
//比如对于725321来说，由于5321由于从最低位到最高位是升序排列，已经达到该四位数字permutation的最大值。这时不得不改变第5位的2来增加数值。如//何改变？为了使增量最小，在前4位中比第5位大的数(5, 3)中找一个最小的数，即数字3。用3替换2，而剩下5, 2, 2, //1四个数字要组成最低4位。由于第5位已经从2增加到3，同样为了使增量最小，我们希望剩下的4位数尽可能小。所以将他们从低到高位降序排列即可。
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int cur=nums[nums.size()-1];
        for(int i=nums.size()-2;i>=0;)
        {
            if(nums[i]>=cur)
            {  cur=nums[i];
                i--;
            }
            else
            {
                 int j=i+1;
                 while(j<nums.size()-1)
                 {
                     if(nums[i]>=nums[j+1])
                     {int temp=nums[j];
                     nums[j]=nums[i];
                     nums[i]=temp;
                     sort(nums.begin()+i+1,nums.end());
                         return;
                     }
                     else j++;
                 }

                int temp=nums[nums.size()-1];
                     nums[nums.size()-1]=nums[i];
                    nums[i]=temp;
                     sort(nums.begin()+i+1,nums.end());
                         return;

              }



        }
        sort(nums.begin(),nums.end());
    }
};
