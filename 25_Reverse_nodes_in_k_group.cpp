// Hard problem. First attempt. Code not working yet.

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
    ListNode* reverseKGroup(ListNode* head, int k) {
        int length;
        ListNode * walker = head;
        
        // Quickly calculate length of linked list
        while (walker) {
            length++;
        }
        int subunits = length / k;
        
        // Create a dummy node linked to head for the initial prev anchor
        ListNode * dummy = new ListNode(0);
        dummy->next = head;
        ListNode * prev = dummy;
        for (subunits; subunits > 0; subunits--) {
            walker = prev;
            new_base = prev->next; // D 1 2 3
            for (int outer_counter = k; outer_counter > 0; outer_counter--) {
                for (counter = outer_counter - 1; counter > 0; counter--) {
                    walker = walker->next;
                    new_base = new_base->next;
                }
                new_base->next = walker;
            }
            for (counter = k; counter > 0; counter--) {
                new_base->next = walker;
            }
            for (counter = k; counter > 0; counter--) {
                prev = prev->next;
            }
        }
        return dummy->next;
    }
};