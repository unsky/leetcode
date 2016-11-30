class Solution {
public:
    int maxArea(vector<int>& height) {
        int Area=0;
        int result=0;
        int i=0,j=height.size()-1;
        while(i<j)
        {
            Area=min(height[i],height[j])*(j-i);
            result=max(Area,result);
            if(height[i]<height[j])
            i++;
           else if (height[i]>height[j])
            j--;
            else
            {i++;
            j--;
            }

        }
        return result;
    }
};
