class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s;
        generate(res,s,0,0,n);
        return res;
    }
    void generate(vector<string>&res,string s,int left,int right,int n)
    {
        if(left==n&&right==n)
     {res.push_back(s);
     return;
     }

      if(left<n)
        {s.push_back('(');
        generate(res,s,left+1,right,n);
        s.pop_back();
        }
    if(right<left)
    {s.push_back(')');
       generate(res,s,left,right+1,n);
        s.pop_back();
    }

    }
};
