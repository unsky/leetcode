class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int MaxLength=1;
     if(s.length()==0)
     return 0;
        for(int i=0;i<s.length()-1;i++)
        { 
            for(int SubStringEnd=i+1;SubStringEnd<s.length();SubStringEnd++)
            { 
                string SubString=s.substr(i,SubStringEnd-i);
        
            int a=SubString.find(s[SubStringEnd]);
                if(a==-1)
                {
                  
               if(SubString.length()>=MaxLength)
                MaxLength=SubString.length()+1;
                }
                else break ;
         
            }
            
        }
        return MaxLength;
        
    }
};