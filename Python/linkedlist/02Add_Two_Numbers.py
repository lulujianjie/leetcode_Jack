# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
        head_node = ListNode(0)
        last_node = head_node
        carry = 0
        while l1 != None and l2 != None:
            num = (l1.val + l2.val + carry) % 10
            carry = int((l1.val + l2.val + carry) / 10)
            current_node = ListNode(num)
            last_node.next = current_node
            last_node = current_node
            l1 = l1.next
            l2 = l2.next
        while l2 != None:
            num = (l2.val + carry) % 10
            carry = int((l2.val + carry) / 10)
            current_node = ListNode(num)
            last_node.next = current_node
            last_node = current_node
            l2 = l2.next
        while l1 != None:
            num = (l1.val + carry) % 10
            carry = int((l1.val + carry) / 10)
            current_node = ListNode(num)
            last_node.next = current_node
            last_node = current_node
            l1 = l1.next
        if carry != 0:
            last_node.next = ListNode(carry)
        return head_node.next