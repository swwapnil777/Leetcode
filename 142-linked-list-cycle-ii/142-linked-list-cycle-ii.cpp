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
    ListNode *detectCycle(ListNode *head) {
        ListNode *temp = head;
        set<ListNode*> set;
        while(temp!=NULL){
            if(set.find(temp)!=set.end()){
                auto it = set.find(temp);
                return *it;
            }
            set.insert(temp);
            temp=temp->next;
        }
        return NULL;
    }
};