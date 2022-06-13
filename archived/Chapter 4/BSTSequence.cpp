/*
# 4.9 - BST Sequences
#### Mitchell Ciupak
#### 20210201


## Problem
A binary search tree was created by traversing through an array from left to right
and inserting each element. Given a binary search tree with distinct elements, print all possible
arrays that could have led to this tree.
Page: (110,121)

## Clarifying Questions
* (Example)[https://stackoverflow.com/questions/21211701/given-a-bst-and-its-root-print-all-sequences-of-nodes-which-give-rise-to-the-sa]

## List of Solutions vs. Tradeoffs

## Pseudocode

*/

//Implementation
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > findAllSeq(TreeNode* ptr)
{
    if (ptr == NULL) {
        vector<int> seq;
        vector<vector<int> > v;
        v.push_back(seq);
        return v;
    }


    if (ptr->left == NULL && ptr->right == NULL) {
        vector<int> seq;
        seq.push_back(ptr->val);
        vector<vector<int> > v;
        v.push_back(seq);
        return v;
    }

    vector<vector<int> > results, left, right;
    left = findAllSeq(ptr->left);
    right = findAllSeq(ptr->right);
    int size = left[0].size() + right[0].size() + 1;

    vector<bool> flags(left[0].size(), 0);
    for (int k = 0; k < right[0].size(); k++)
        flags.push_back(1);

    for (int i = 0; i < left.size(); i++) {
        for (int j = 0; j < right.size(); j++) {
            do {
                vector<int> tmp(size);
                tmp[0] = ptr->val;
                int l = 0, r = 0;
                for (int k = 0; k < flags.size(); k++) {
                    tmp[k + 1] = (flags[k]) ? right[j][r++] : left[i][l++];
                }
                results.push_back(tmp);
            } while (next_permutation(flags.begin(), flags.end()));
        }
    }

    return results;
}