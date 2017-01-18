class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        if (digits.length()==0)
    return res;
     string dict[] = {" ", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string comb(digits.length(),'/0');
           backtracking(digits,res,dict,comb,0);
           return res;
    }
  void  backtracking(string digits,vector<string> &res,string dict[],string &comb, int index)
    { if(index==digits.size())
      {res.push_back(comb);
          return;
      }
      string str=dict[digits[index]-'0'];
      for(int i=0;i<str.length();i++)
      {comb[index]=str[i];
         backtracking(digits,res,dict,comb,index+1);
      }
    }
};
