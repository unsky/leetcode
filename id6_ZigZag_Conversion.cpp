class Solution {
public:
    string convert(string s, int numRows) {
        string result;
        if (numRows==1)
        return s;
        if(s.size()==0)return result;
        for(int i=0;i<numRows;i++)
        {
            for(int j=0;(j*(numRows+numRows-2)+i)<s.size();j++)
            {result.append(1,s[j*(numRows+numRows-2)+i]);
            if(i==0||i==numRows-1)
            continue;
            if(((j+1)*(numRows+numRows-2)-i)<s.size())
            {
            result.append(1,s[(j+1)*(numRows+numRows-2)-i]);
            }
                
            }
            
        }
        return result;
        
        
    }
};