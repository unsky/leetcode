class Solution {
public:
    int romanToInt(string s) {
         string roman[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        int num[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
         int i=0,index=0,result=0;
         string CurString;
        while(i<13)
        { CurString=s.substr(index,roman[i].size());
         if(CurString==roman[i])
         {result=result+num[i];
         index=index+roman[i].size();
         cout<<num[i]<<endl;
        }
         else  if((CurString!=roman[i])||s.substr(index+roman[i].size(),roman[i].size())!=roman[i])
             i++;
        }
        return result;

    }
};
