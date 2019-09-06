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
        if (!head || !head->next)
            return head;
        ListNode * root = head->next;
        head->next = root->next;
        root->next = head;
        ListNode * temp;
        ListNode * prev = root->next;
        while (prev->next && prev->next->next) {
            temp = prev->next->next;
            prev->next->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
            prev = prev->next->next;
        }
        return root;
    }
};