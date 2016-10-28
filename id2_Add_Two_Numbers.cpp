/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode * AddList=new ListNode(0);
        ListNode * p=AddList;
        ListNode * L1current=l1;
        ListNode * L2current=l2;
        int carry=0;
        while(L1current||L2current)
        {
         ListNode * CurrNode=new ListNode(0);
         if(L1current&&L2current)
        {  CurrNode->val=L1current->val+L2current->val+carry;
         if (CurrNode->val>=10)
         { CurrNode->val=CurrNode->val%10;
           carry=1;
         }
         else
         carry=0;
         CurrNode->next=NULL;
        L1current=L1current->next;
        L2current=L2current->next;
           p->next=CurrNode;
           p=p->next;
           continue;
        }
        if(!L1current||!L2current)
        {
         if(!L1current)
         {
         CurrNode->val=L2current->val+carry;
         if (CurrNode->val>=10)
         { CurrNode->val=CurrNode->val%10;
           carry=1;
         }
         else
         carry=0;
         CurrNode->next=NULL;
          L2current=L2current->next;
           p->next=CurrNode;
           p=p->next;
           continue;
         }
          if(!L2current)
         {
         CurrNode->val=L1current->val+carry;
         if (CurrNode->val>=10)
         { CurrNode->val=CurrNode->val%10;
           carry=1;
         }
         else
         carry=0;
         CurrNode->next=NULL;
          L1current=L1current->next;
           p->next=CurrNode;
           p=p->next;
           continue;
         }
        }
          
             
         }
         //处理最后进位
         if (carry==1)
         {
         ListNode * CurrNode=new ListNode(0);
         CurrNode->val=1;
         CurrNode->next=NULL;
         p->next=CurrNode;
         }
         
         
         AddList=AddList->next;
         return AddList;   
        }
        
    
};