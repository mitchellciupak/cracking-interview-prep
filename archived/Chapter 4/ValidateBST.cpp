/*
# 4.5 - List of Depths
#### Mitchell Ciupak
#### 20210120


## Problem
Implement a function to check if a binary tree is a binary search tree.
Page: (109,121)


## Clarifying Questions

## List of Solutions vs. Tradeoffs

## Pseudocode

*/

//Implementation
#include <iostream>
#include <list>

class Solution {
public:
    bool isValidBST(TreeNode* node,
        TreeNode* minNode = NULL, TreeNode* maxNode = NULL) {

        // Empty Tree || Leaf Nodes => Valid BST
        if (!node) return true;

        // Node not satisfying BST rule
        if ((minNode && node->val <= minNode->val) ||
            (maxNode && node->val >= maxNode->val))
            return false;

        // Recursively check left and right sub trees
        bool isLeftBST = isValidBST(node->left, minNode, node);
        bool isRightBST = isValidBST(node->right, node, maxNode);

        return isLeftBST && isRightBST;

    }

};