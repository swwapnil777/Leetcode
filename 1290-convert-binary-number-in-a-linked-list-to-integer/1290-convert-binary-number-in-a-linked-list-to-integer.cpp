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
    int getDecimalValue(ListNode* head) {
        ListNode *temp = head;
        int nodes(-1);
        while(temp!=NULL){
            nodes++;
            temp=temp->next;
        }
        temp=head;
        int decimal(0);
        while(temp!=NULL){
            decimal = decimal + (pow(2,nodes--))*(temp->val);
            
            temp=temp->next;
        }
        return decimal;
    }
    
};