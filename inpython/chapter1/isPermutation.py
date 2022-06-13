#!/bin/python3.8
# -*- coding: utf-8 -*-

##################################
__title__         = "CCI Prep - 1.2 Arrays and Stirngs - Check Permutations"
__contributers__  = "Mitchell Ciupak"
__datecreated__   = 20220607
##################################
__description__    = """
Check Permutation: Given two strings, write a method to decide if one is a permutation of the other.
"""
__page__           = {"book":90,"pdf":101}
__clertification__ = """
* A permutation is true if parent sring has the same number of character counts as child.
* If the parent is a permutation of the child then the child is a permutation of the parent.
* The set of characters allowed in the input strings is 26 upper and 26 lower of english alphabet.
"""

def isPermutation(parent: str, child: str):
    # permutations are of the same length
    if len(parent) != len(child):
        return False

    # create a hashmap of the alphabet (only has to be a list because we can dirive the correct index from ascii conversion)
    map = [0] * 26

    # populate parent with occurances of chars in string into hashmap
    for letter in parent.lower():
        letter_as_index = ord(letter) - 97
        map[letter_as_index] += 1

    # compare child to parent with map lookup
    for letter in child.lower():
        letter_as_index = ord(letter) - 97
        map[letter_as_index] -= 1
    
        if map[letter_as_index] < 0:
            return False
    
    return True