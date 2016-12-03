class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        string result;
        if(strs.empty())return result;
        for(int i=0;i<strs[0].size();i++)//拿任意一个做标度
        {  for(int j=1;j<strs.size();j++)
             {if(strs[0][i]!=strs[j][i])
              return result;
             }
             result.push_back(strs[0][i]);

        }
        return result;

    }
};
