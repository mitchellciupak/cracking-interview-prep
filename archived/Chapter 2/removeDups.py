# 2.1 Linked List Remove Dups/Remove Duplicates
## Mitchell Ciupak
### 20200930

'''
Write code to remove duplicates from an unsorted linked list
Page: (94,105)
'''

import linkedLists as ll

# Complexity O(n)
def removeDups(head):
    valdict = []
    prev = ll.Node()
    i = 0
    while(head):
        if head.val in valdict:
            prev.next = head.next
        else:
            valdict.append(head.val)
            prev = head
        head = head.next
        i += 1
    return head