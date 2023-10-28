/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int length(struct ListNode* head){
        int c=0 ;
        while(head!=NULL){
            c++;
            head=head->next;
        }
        return c;
    }

struct ListNode* removeNthFromEnd(struct ListNode* head, int k) {
    if(head->next == NULL){
        return NULL;
    }
    int n = length(head);
    int i = 1, pos = n - k + 1;
    if(pos == 1){
        head = head->next;
        return head;
    }
    struct ListNode*prev = NULL, *curr = head;
    while(i< pos){
        prev = curr;
        curr = curr->next;
        i++;
    }
    prev->next = curr->next;
    return head;
    }