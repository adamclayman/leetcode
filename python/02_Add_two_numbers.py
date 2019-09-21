# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        """
        carry = 0
        head = ListNode(0)
        cur = head
        while l1 and l2:
            carry, r = divmod(l1.val + l2.val + carry, 10)
            cur.next = ListNode(r)
            cur = cur.next
            l1 = l1.next
            l2 = l2.next
        while l1:
            carry, r = divmod(l1.val + carry, 10)
            cur.next = ListNode(r)
            cur = cur.next
            l1 = l1.next
        while l2:
            carry, r = divmod(l2.val + carry, 10)
            cur.next = ListNode(r)
            cur = cur.next
            l2 = l2.next
        if carry == 1:
            cur.next = ListNode(1)
        return head.next