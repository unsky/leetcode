class Solution {
public:
    int divide(int dividend, int divisor) {
        if(divisor==0) return dividend>=0?INT_MAX:INT_MIN;
        if(dividend==INT_MIN&&divisor==-1)return INT_MAX;
        int result=0;
        unsigned long long divd=abs((long long)dividend);
        unsigned long long divs=abs((long long)divisor);
        while(divd>=divs)
        {
            int i=0;
            while(divd>=divs<<i+1)
            {i++;}
            divd=divd-(divs<<i);
            result=result+(1<<i);
        }
        if((dividend>0&&divisor<0)||(dividend<0&&divisor>0))
        return 0-result;
        else return result;
    }
};
