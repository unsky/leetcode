class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int *nums=new int [nums1.size()+nums2.size()];
        vector<int>::iterator it1=nums1.begin();
        vector<int>::iterator it2=nums2.begin();
       int  i=0;
        for(;it1!=nums1.end();it1++)
        {nums[i]=*it1;
        i++;
        }
         for(;it2!=nums2.end();it2++)
        {nums[i]=*it2;
        i++;
        }
        sort(nums,nums+nums1.size()+nums2.size());

        if((nums1.size()+nums2.size())%2==1)

        return nums[(nums1.size()+nums2.size())>>1];
        else
        return ((nums[(nums1.size()+nums2.size())>>1]+ nums[(nums1.size()+nums2.size()-1)>>1])/2.0);
    }
};
