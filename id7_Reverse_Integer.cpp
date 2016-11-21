class Solution {
public:
    int reverse(int x) {
    int pre_result=0;
    int result=0;
    while(x)
    {pre_result=result;
    result=result*10+x%10;
    x=x/10;
    if(result/10!=pre_result)
    return 0;
     }
     return result;
    }
};