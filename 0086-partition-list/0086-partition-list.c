/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* partition(struct ListNode* head, int x) {

struct ListNode less_dummy, greater_dummy;

    struct ListNode *p_less = &less_dummy;
    struct ListNode *p_greater = &greater_dummy;

    while(head != NULL)
    {
        if (head->val < x)
        {
            p_less->next = head;
            p_less = p_less->next;
        }
        else
        {
            p_greater->next = head;
            p_greater = p_greater->next;
        }
        head = head->next;
    }

    p_greater->next = NULL;
    p_less->next = greater_dummy.next;

    return less_dummy.next;

    


}