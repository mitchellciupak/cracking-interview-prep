/*
# 4.6 - Sucessor
#### Mitchell Ciupak
#### 20210121


## Problem
Write an algorithm to find the "next" node (i.e., in-order successor) of a given node in a
binary search tree. You may assume that each node has a link to its parent.
Page: (110,121)


## Clarifying Questions

## List of Solutions vs. Tradeoffs

## Pseudocode
* If node is a parent, return right child
* If node is a left child, return parent
* If node is a right child, return parent's parent

*/

//Implementation
#include <iostream>
#include <list>
using namespace std;

struct Node{

    Node* left;
    Node* right;
    int data;
    Node(int d)
    {
        left = NULL;
        right = NULL;
        data = d;
    }
};

class Binary_Tree{

    Node* root;


public:
    Binary_Tree() {
        root = NULL;
    }

    void insert(int element);

    list<list<Node*> > successor(Node*);
    list<list<Node*> > successor();

};

void Binary_Tree::insert(int ele) {

    Node* node = new Node(ele);

    if (root == NULL) {
        root = node;
        return;
    }

    Node* temp = root;

    while (temp != NULL) {

        if (ele > temp->data) {
            if (temp->right != NULL)
                temp = temp->right;
            else {
                temp->right = node;
                return;
            }
        }
        else {
            if (temp->left != NULL)
                temp = temp->left;
            else {
                temp->left = node;
                return;
            }
        }
    }
}

list<list<Node*> > Binary_Tree::successor() {
    return successor(root);
}

list<list<Node*> > Binary_Tree::successor(Node* node) {

    list<Node*> current, parent;
    list<list<Node*> > result;

    if (node == NULL)
        return -1;

    if (node->right != NULL)
        return node->right->data;

    result.push_back(current);
    parent = current;

    if (parent != NULL){

        //Parent
        if (parent->left == node){
            return parent->data;
        }

        result.push_back(current);
        parent = current;

        //Grandparent
        if (parent != NULL){
            return parent->data;
        }

    }

}


//Testing
int main()
{

    Binary_Tree bt;
    bt.insert(3);
    bt.insert(2);
    bt.insert(4);
    bt.insert(1);
    bt.insert(5);
    l = bt.level();

    int l = bt.successor(3);
    cout << "The Successor to 3 is " << l << endl;

    return 0;
}
