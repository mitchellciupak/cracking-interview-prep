import pytest
import partition
import linkedLists as ll


def test_partition1():
    '''
    Example: 3-> 5 -> 8 -> 5 -> 10 -> 2 -> 1 [partition = 5]
    Output: 3 -> 1 -> 2 -> 10 -> 5 -> 5 -> 8
    '''

    list = ll.Node(3)
    list.next = ll.Node(5)
    list.next.next = ll.Node(8)
    list.next.next.next = ll.Node(5)
    list.next.next.next.next = ll.Node(10)
    list.next.next.next.next.next = ll.Node(2)
    list.next.next.next.next.next.next = ll.Node(1)

    newList = partition.partition(list,5)
    assert newList.next.val == 3
