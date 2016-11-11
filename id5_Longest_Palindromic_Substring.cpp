class Solution {
public:
    string longestPalindrome(string s) {
        string longestPalindromeString =s.substr(0,1);
        for(int i=0;i!=s.size();i++)
        {   //ÆæÊý
            for(int j=0;((i-j)>=0)&&((i+j)<=s.size()-1);j++)
            {if(s[i-j]!=s[i+j])
             break;
             if ((2*j+1)>longestPalindromeString.size())
             longestPalindromeString=s.substr(i-j,2*j+1);
             }
             //Å¼Êý
            for(int j=0;((i-j)>=0)&&((i+j+1)<=s.size()-1);j++)
            { if(s[i-j]!=s[i+j+1])
             break;
             if ((2*j+2)>longestPalindromeString.size())
             longestPalindromeString=s.substr(i-j,2*j+2);
            }
        }
        return longestPalindromeString;
    }
};