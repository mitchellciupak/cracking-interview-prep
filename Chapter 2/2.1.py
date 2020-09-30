# 2.1 Linked List Remove Dups/Remove Duplicates
## Mitchell Ciupak
### 20200930

'''
Write code to remove duplicates from an unsorted linked list.
FOLLOW UP
How would you solve this problem if a temporary buffer is not allowed?
Page: (94,105)
'''
class Node:
    def __init__(self, data=None):
        self.val = data
        self.next = None

# Complexity O(n)
def removeDups(head):
    valdict = []
    prev = Node()
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

def test1():
    #Duplicate in tail
    head = Node(1)
    head.next = Node(2)
    head.next.next = Node(3)
    head.next.next.next = Node(1)

    printLL(removeDups(head))

def printLL(head):
    while(head):
        print(head.val)
        head = head.next

test1()