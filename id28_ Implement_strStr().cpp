class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.length()>haystack.length())
        return -1;
        if(haystack=="")
        {
        if(needle=="")
        return 0;
        else return -1;
        }
        for(int i=0;i+needle.length()<=haystack.length();i++)
        {
            string str=haystack.substr(i,needle.length());

        if(str==needle)
        return i;

        }
        return -1;

    }
};
