# 2.5 Linked List - Sum List
## Mitchell Ciupak
### 20201116

'''
Sum Lists: You have two numbers represented by a linked list, where each node contains a single
digit. The digits are stored in reverse order, such that the 1 's digit is at the head of the list. Write a
function that adds the two numbers and returns the sum as a linked list.
EXAMPLE
Input: (7-> 1 -> 6) + (5 -> 9 -> 2).That is,617 + 295.
Output: 2 -> 1 -> 9. That is, 912.

Page: (94,105)
'''

import linkedLists as ll

# Complexity O(n)
def sumList(head):
    sumString = ''

    while(head):
        sumString += str(head.val)
        head = head.next

    return int(sumString)

# Complexity O(n)
def sumListReversed(head):
    sumString = ''

    while(head):
        sumString += str(head.val)
        head = head.next

    return int(sumString[::-1])