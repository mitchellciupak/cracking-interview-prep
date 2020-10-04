# 2.2 Linked List Return kth to Last
## Mitchell Ciupak
### 20200930

'''
Implement an algorithm to find the kth to last element of a singly linked list. 
Page: (94,105)
'''
class Node:
    def __init__(self, data=None):
        self.val = data
        self.next = None

def lenLinkedList(list):
    temp = list.head
    count = 0
    while(temp):
        count += 1
        temp = temp.next
    return count

def printLL(head):
    while(head):
        print(head.val)
        head = head.next

# Complexity O(nk)
def kthToLast(head, k):

    len = lenLinkedList(head)

    for i in range(0,k - len):
        head = head.next 

    return head

