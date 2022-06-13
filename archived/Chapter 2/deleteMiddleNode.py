# 2.3 Linked Lists - Delete Middle Node
## Mitchell Ciupak
### 20201005

'''
Implement an algorithm to delete a node in the middle (i.e., any node but
the first and last node, not necessarily the exact middle) of a singly linked list, given only access to
that node.
Page(94,105)
'''

import linkedLists as ll
import math

def deleteNode(n):
    if not (n or n.next):
        return

    next = n.next
    n.val = next.val
    n.next = next.next
    return

def deleteMiddleNode(head):

    len = ll.lenLinkedList(head)
    if len <= 2:
        return

    temp = head
    for i in range(0,math.ceil(len/2)):
        temp = temp.next

    deleteNode(temp)

    return head


