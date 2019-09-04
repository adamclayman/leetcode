class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* present = head;
        ListNode* prev = head;
        int size = 0;
        for (present; present != NULL; present = present->next) {
            size++;
        }
        present = head;
        int index = size - n;
        if (index == 0) {
            head = head->next;
            delete present;
            present = prev = NULL;
            return head;
        } else {
            while (index > 0) {
                prev = present;
                present = present->next;
                index--;
            }
            prev->next = prev->next->next;
            delete present;
            return head;
        }
    }
};