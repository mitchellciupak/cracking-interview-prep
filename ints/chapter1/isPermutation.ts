//TODO - https://www.testim.io/blog/typescript-unit-testing-101/

function isPermutation(parent:string, child:string) {
    // permutations are of the same length
    if (parent.length != child.length) {return false;}

    // create a hashmap of the alphabet (only has to be a list because we can dirive the correct index from ascii conversion)
    var map = new Array<number>(26).fill(0);

    // populate parent with occurances of chars in string into hashmap
    for (var letter in parent.toLowerCase()) {
        var letter_as_index = letter.charCodeAt(0) - 97
        map[letter_as_index] += 1
    }

    // compare child to parent with map lookup
    for (var letter in child.toLowerCase()) {
        var letter_as_index = letter.charCodeAt(0) - 97
        map[letter_as_index] -= 1
    
        if (map[letter_as_index] < 0 ){ return false;}
    }

    return true;
}