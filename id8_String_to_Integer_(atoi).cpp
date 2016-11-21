class Solution {
public:
    int myAtoi(string str) {
        str.erase(0,str.find_first_not_of(' '));
        str.erase(str.find_last_not_of(' ')+1);
        int result=0;
        int pre_result;
        int sigm=1;
        if(str[0]=='-')
        {sigm=-1;
            str=str.substr(1);
        }
        else if(str[0]=='+')
       str=str.substr(1);
    
       if (str.length()==0)return 0;
        for(int i=0;i<str.length();i++)
        {if(str[i]<'0'||str[i]>'9')
         break;
         pre_result=result;
         result=result*10+str[i]-48;
         if(result/10!=pre_result)//溢出操作，注意在测试数据集里 Long long 类型也溢出
         {   if(sigm<0)return INT_MIN;
             else return INT_MAX;
         }
        }
     
        return (sigm*result);
        
    }
};