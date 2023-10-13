/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode *p,*q;
    p=head;
    q=head;
    while(q!=NULL && q->next!=NULL){
        q=q->next->next;
        p=p->next;
        if(q==p){
            return true;
        }
    }
    return false;
}