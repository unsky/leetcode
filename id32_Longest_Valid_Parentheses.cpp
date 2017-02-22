class Solution {
public:
    int longestValidParentheses(string s) {

        if (s.length()<2)
        return 0;
        int dp[s.length()];
        for(int i=0;i<s.length();i++)
        dp[i]=0;
        int maxLen =0;
        for(int i=s.length()-2; i>=0;i--)
        {
            if(s[i]=='('){

                if((i+dp[i+1]+1)<s.length()&&s[i+dp[i+1]+1]==')')
                {dp[i]=dp[i+1]+2;
                cout<<dp[i];
                if((i+dp[i+1]+2)<s.length())
                dp[i]+=dp[i+dp[i+1]+2];
                }
            }
            if(maxLen<dp[i])
            maxLen=dp[i];
        }

        return maxLen;

    }
};
