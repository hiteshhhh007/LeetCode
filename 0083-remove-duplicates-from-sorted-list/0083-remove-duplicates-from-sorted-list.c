/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *p=head;
    while(p && p->next){
        if(p->next->val==p->val){
            p->next=p->next->next;
        }
        else{
            p=p->next;
        }

    }
    return head;
}