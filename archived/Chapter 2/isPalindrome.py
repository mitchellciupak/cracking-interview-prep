# 2.6 Linked List - is Palindrome
## Mitchell Ciupak
### 20201118

'''
* palindrome: a word, phrase, or sequence that reads the same backward as forward, e.g., madam or nurses run
Page: (94,105)
'''

import linkedLists as ll

def isPalindrome(node):

    if(lenLinkedList(head) is 0 or lenLinkedList(head) is 1):
        return True;

    isPalindrome(node.next)


#Not Used, just ignored
def removeSpaces(head):
    temp = head.next
    prev = head

    while(head):
        if head.val is " ":
            prev.next = head.next
        temp = temp.next
        prev = prev.next
    return prev