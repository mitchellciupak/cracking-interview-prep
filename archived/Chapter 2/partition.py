# 2.4 Linked List Partition
## Mitchell Ciupak
### 20201006

'''
Write code to partition a linked list around a value x, such that all nodes less than x come
before all nodes greater than or equal to x. If x is contained within the list, the values of x only need
to be after the elements less than x (see below). The partition element x can appear anywhere in the
"right partition"; it does not need to appear between the left and right partitions.

Example: 3-> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition = 5]
Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8

Page: (94,105)
'''

import linkedLists as ll

# Complexity O(n)
def partition(head,x):
    beforeStart = ll.Node()
    beforeEnd = ll.Node()
    afterStart = ll.Node()
    afterEnd = ll.Node()

    while(head):
        next = head.next
        head.next = ll.Node()

        if head.next < x:
            #Insert node into end of beforeList
            if beforeStart.val == None:
                beforeStart = head
                beforeEnd = beforeStart
            else:
                beforeEnd.next = head
                beforeEnd = head
        else:
            #Insert node into end of afterList
            if afterStart.val == None:
                afterStart = head
                afterEnd = afterStart
            else:
                afterEnd.next = head
                afterEnd = head

        head = next

    if beforeStart.val == None:
        return afterStart

    beforeEnd.next = afterStart
    return beforeStart