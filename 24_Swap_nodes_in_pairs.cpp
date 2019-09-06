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
    ListNode* swapPairs(ListNode* head) {
        ListNode * next = head->next;
        ListNode * base = head;
        ListNode * temp = head;
        head = head->next;
        while (base && base->next) {
            temp = next;
            base->next = base->next->next;
            next->next = base;
            base = temp->next->next;
            if (next->next->next != NULL)
                next = temp->next->next->next;
        }
        return head;
    }
};