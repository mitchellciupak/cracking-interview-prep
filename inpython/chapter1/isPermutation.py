# 1.2 Arrays and Stirngs - Check Permutations
# Mitchell Ciupak
# 20201104

"""
Check Permutation: Given two strings, write a method to decide if one is a permutation of the
other.
Page(90,101)

Note: Permutation - is true of parent sring has the same number of character counts as child
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

if __name__ == "__main__":
    parent = "isth"
    child = "this"

    if isPermutation(parent,child):
        print(child + " is a permutation of " + parent)
    else:
        print(child + " is not a permutation of " + parent)