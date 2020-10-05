import pytest
import deleteMiddleNode
import linkedLists as ll


def test_deleteMiddleNode1():
    list = ll.Node(1)
    list.next = ll.Node(2)
    assert deleteMiddleNode.deleteMiddleNode(list) == None

def test_deleteMiddleNode2():
    list = ll.Node(1)
    list.next = ll.Node(2)
    list.next.next = ll.Node(3)

    rlist = deleteMiddleNode.deleteMiddleNode(list)
    assert rlist.val == 1
    assert rlist.next.val == 3