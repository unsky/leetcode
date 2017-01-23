/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */


class Solution {
public:struct compare{
     bool operator()(ListNode* a,ListNode *b)
     const{return a->val<b->val;}
 };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multiset<ListNode *,compare> se;
        ListNode *result=new ListNode(0);
        ListNode *head=result;
        for(int i=0;i<lists.size();i++)
        { if(lists[i]!=NULL)
          se.insert(lists[i]);
        }
        while(!se.empty())
        {
            ListNode *node=*se.begin();
        head->next=node;
        head=head->next;
        se.erase(se.begin());
         if(node->next!=NULL)
         {node=node->next;
             se.insert(node);
         }

        }
        return result->next;

    }
};
