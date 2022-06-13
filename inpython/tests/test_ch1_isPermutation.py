#!/bin/python3.8
# -*- coding: utf-8 -*-

##################################
__title__         = "CCI Prep - 1.2 Arrays and Stirngs - Check Permutations - Unit Tests"
__contributers__  = "Mitchell Ciupak"
__datecreated__   = 20220607
##################################

import pytest
from chapter1.isPermutation import isPermutation 

def test_ispermute_standardpass():
    parent = "isth"
    child = "this"
    assert isPermutation(parent,child) == True

def test_ispermute_standardfail():
    parent = "pass"
    child = "fail"
    assert isPermutation(parent,child) == False

def test_ispermute_multiletterfail():
    parent = "pass"
    child = "paass"
    assert isPermutation(parent,child) == False

