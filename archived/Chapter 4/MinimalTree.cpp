/*
# 4.2 - Route Between Nodes
#### Mitchell Ciupak
#### 20210115

## Problem
Given a sorted (increasing order) array with unique integer elements,
write an algorithm to create a binary search tree with minimal height.
Page: (109,120)


## Clarifying Questions
* Are these values ints? => Yes
* Is the size of the array given? => Yes

## List of Solutions vs. Tradeoffs
* In order placement (Left Right Root)

## Pseudocode

void inOrderTraversal(TreeNode node) {
    if (node!= null) {
        inOrderTraversal(node.left);
        visit(node);
        inOrderTraversal(node.right);
    }
}

*/

//Implementation
#include <iostream>
using namespace std;

class BST
{
    int data;
    BST* left, * right;

public:
    BST();
    BST(int);
    BST* Insert(BST*, int);
    void Inorder(BST*);
};

// Default Constructor definition.
BST::BST()
    : data(0)
    , left(NULL)
    , right(NULL)
{
}

// Parameterized Constructor definition.
BST::BST(int value) {
    data = value;
    left = right = NULL;
}

// Insert function definition.
BST* BST::Insert(BST* root, int value) {
    if (!root) {
        // Insert the first node, if root is NULL.
        return new BST(value);
    }

    // Insert data.
    if (value > root->data) {
        // Insert right node data, if the 'value'
        // to be inserted is greater than 'root' node data.

        // Process right nodes.
        root->right = Insert(root->right, value);
    }
    else {
        // Insert left node data, if the 'value'
        // to be inserted is greater than 'root' node data.

        // Process left nodes.
        root->left = Insert(root->left, value);
    }

    // Return 'root' node, after insertion.
    return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST::Inorder(BST* root) {
    if (!root) {
        return;
    }
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}

//Testing
int main() {
    BST b, * root = NULL;
    root = b.Insert(root, 1);
    b.Insert(root, 2);
    b.Insert(root, 3);
    b.Insert(root, 4);
    b.Insert(root, 5);
    b.Insert(root, 6);
    b.Insert(root, 7);

    b.Inorder(root);
    return 0;
}
