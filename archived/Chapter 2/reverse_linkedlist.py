# Reverse Linked List
## Mitchell Ciupak
## 20210303

import linkedLists as ll

def reverse_linkedlist(head):
    prev = None
    curr = head
    nxt = head.next

    while curr is not None:
        nxt = curr.next # temp storage

        curr.next = prev# assign next to last (essential for reversal)
        prev = curr     # update prev
        curr = nxt      # increment curr

    head = prev
    return head



# Create List to Reverse
head = ll.Node(1)
head.next = ll.Node(2)
head.next.next = ll.Node(3)
head.next.next.next = ll.Node(4)
head.next.next.next.next = ll.Node(5

head = reverse_linkedlist(head=head)
ll.printLL(head)
