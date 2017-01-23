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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(k==1||head==NULL)
        return head;
        ListNode *result=new ListNode(-1);
        ListNode *pre=result;
        result->next=head;
        int num=0;
        while(head!=NULL)
        {num++;
        head=head->next;
        }

        while(k<=num)
        {
        ListNode * cur=pre->next;
        ListNode *curnext=cur->next;
        for(int i=1;i<k;i++)
        {
        cur->next=curnext->next;
        curnext->next=pre->next;
        pre->next=curnext;
        curnext=cur->next;
        }
        pre=cur;
        num=num-k;

        }
        return result->next;

        }


};
