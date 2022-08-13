/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL){
           ListNode * temp=head;
            head=NULL;
            delete temp;
            return head;
        }
        if(head->next->next==NULL){
            ListNode *temp = head;
            temp=temp->next;
            head->next=NULL;
            delete temp;
            return head;
        
        }
        ListNode *slow=head;
        ListNode *fast = head;
        while(fast!=NULL && fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        if(slow->next==NULL){    
            
        }
        swap(slow->val,slow->next->val);
        ListNode *temp=slow->next;
        slow->next = slow->next->next;
        delete temp;
        return head;
             
    }
};