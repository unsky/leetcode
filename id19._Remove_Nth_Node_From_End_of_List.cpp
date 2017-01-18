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
    ListNode* removeNthFromEnd(ListNode* head, int n)
    { ListNode* result=NULL;
    if(head==NULL||head->next==NULL)
    return result;
   ListNode* Lhead= new ListNode(sizeof(ListNode));
//  Lhead->val=99;
   Lhead->next=head;
  // cout<<Lhead->next->next->val;
        ListNode *p=Lhead;
        for(int i=0;i<=n;i++)
        {
        p=p->next;

        }
        ListNode *q=Lhead;
        while(p)
        {p=p->next;
         q=q->next;
        }
        ListNode* h=q->next->next;

    //  cout<<h->val<<q->val;
        q->next=h;
     //   cout<<q->val;
        result=Lhead->next;
        return result;
    }
};
