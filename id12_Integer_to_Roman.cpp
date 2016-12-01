class Solution {
public:
    string intToRoman(int num) {
        string roman[]={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        int val[13]={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        string result;
        int count;
        for(int i=12;i>=0;i--)
        { if(num>=val[i])
           {   count=num/val[i];
           num=num%val[i];
           for(int j=0;j<count;j++)
           result.append(roman[i]);
        }}
        return result;


    }
};
