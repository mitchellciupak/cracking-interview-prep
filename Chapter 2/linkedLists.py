
class Node:
    def __init__(self, data=None):
        self.val = data
        self.next = None

def lenLinkedList(list):
    temp = list
    count = 0
    while(temp):
        count += 1
        temp = temp.next
    return count
