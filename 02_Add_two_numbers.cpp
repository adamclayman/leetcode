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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        ListNode* cur1 = l1;
        ListNode* cur2 = l2;
        int sum = 0, carry = 0, left = 0, right = 0;
        while (cur1 || cur2) {
            left = cur1 != NULL ? cur1->val : 0;
            right = cur2 != NULL ? cur2->val : 0;
            sum = left + right + carry;
            cur->next = new ListNode(sum % 10);
            carry = sum / 10;
            cur = cur->next;
            if (cur1 != NULL)
               cur1 = cur1->next;
            if (cur2 != NULL)
                cur2 = cur2->next;
        }
        if (carry != 0) {
            cur->next = new ListNode(carry);
        }
        return dummy->next;
    }
};