class Solution {
public:
    bool isPalindrome(int x) {
    long long rex=0;
    long long pr_x=x;
    long long pre_result;
    if(x<0)return 0;
    while(x)
    { pre_result=rex;
        rex=rex*10+x%10;
    x=x/10;
    if(rex/10!=pre_result)
    return 0;
    }
    cout<<rex;
    if (rex==pr_x)
    return 1;
    else return 0;
        
    }
};