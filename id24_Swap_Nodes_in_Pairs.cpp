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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL)
        return head;
        ListNode *result=new ListNode(0);
         ListNode *list=result;
        result->next=head;
        while(head->next!=NULL)
        {
            cout<<"111"<<endl;
            ListNode * node=head->next;
        list->next=node;
        head->next=node->next;
        node->next=head;
        head=head->next;
        if (head==NULL)
        return result->next;
        else
        list=list->next->next;

        }
       return result->next;

    }
};
