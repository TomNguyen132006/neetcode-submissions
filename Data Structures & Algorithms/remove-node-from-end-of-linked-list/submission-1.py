# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        dummy = ListNode(0, head)
        cur = dummy
        nth = dummy
        for i in range(n):
            cur = cur.next
        while cur.next: 
            nth = nth.next
            cur = cur.next
        nth.next = nth.next.next
        return dummy.next