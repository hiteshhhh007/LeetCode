/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head){
    struct ListNode*p,*q=NULL,*r=NULL;
    p=head;
    while(p!=NULL){
        r=q;
        q=p;
        p=p->next;
        q->next=r;
    }
    return q;
    
    
}