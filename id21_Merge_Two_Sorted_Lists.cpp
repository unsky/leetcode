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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {

        if(l1==NULL)return l2;
        if(l2==NULL)return l1;

        ListNode *result=new ListNode(-1);
        ListNode *head=result;
        while(l1!=NULL&&l2!=NULL)
        {
            if(l1->val<l2->val)
          { ListNode *node=l1;
          result->next=node;
          result=result->next;
          l1=l1->next;

           }
          else if(l1->val>=l2->val){
          ListNode *node=l2;

          result->next=node;
          result=result->next;
          l2=l2->next;
      //   cout<<l2->val<<" "<<l1->val<<endl;
           }
        }
        if(l1&&l2)
        return head->next;
        else
        {
            if(l1==NULL)
            {
            result->next=l2;}
          else if(l2==NULL)
         result->next=l1;
         return head->next;
        }

        delete result;

    }
};
