// integers.go
package main

// Multiply returns the product of two integers
func Multiply(a, b int) int {
	return a * b
}

func isPermutation(parent, child) {
    // permutations are of the same length
    if (parent.length != child.length) {return False;}

    // create a hashmap of the alphabet (only has to be a list because we can dirive the correct index from ascii conversion)
    map = new Array(len).fill(26);

    // populate parent with occurances of chars in string into hashmap
    for (let letter in parent.toLowerCase()) {
        letter_as_index = letter.charCodeAt(0) - 97
        map[letter_as_index] += 1
    }

    // compare child to parent with map lookup
    for (let letter in child.toLowerCase()) {
        letter_as_index = letter.charCodeAt(0) - 97
        map[letter_as_index] -= 1
    
        if (map[letter_as_index] < 0 ){ return False;}
    }

    return True

}