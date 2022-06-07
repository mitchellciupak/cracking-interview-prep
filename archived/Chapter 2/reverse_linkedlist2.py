# Reverse Linked List
## Mitchell Ciupak
## 20210303

import linkedLists as ll


def reverse_linkedlist(head):

    nxt = head.next
    curr = head
    last = None

    while curr is not None:
        nxt = curr.next #store

        curr.next = last #swap

        last = curr #update
        curr = nxt #incrament

    head = last
    return head




head = ll.Node(1)
head.next = ll.Node(2)
head.next.next = ll.Node(3)
head = reverse_linkedlist(head)
ll.printLL(head=head)
