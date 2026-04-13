/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


int count(struct ListNode *head)
{
    struct ListNode *curr = head; 
    int cnt = 0;

    while (curr != NULL)
    {
        ++cnt;
        curr = curr->next;
    }

    return cnt;
}


struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int numsSize = count(head);
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode* curr = &dummy;

    int numsIte = numsSize - n;

    for (int i = 0; i < numsIte && curr->next != NULL; i++)
    {
        curr = curr->next;
    }

    if (curr->next != NULL)
    {
        curr->next = curr->next->next;
        head = dummy.next;

    }

    return head;
}