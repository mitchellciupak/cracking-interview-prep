// 3.4 - Sort Stack
// Mitchell Ciupak
// 20210108

/*
Write a program to sort a stack such that the smallest items are on the top. You can use
an additional temporary stack, but you may not copy the elements into any other data structure
(such as an array). The stack supports the following operations: push, pop, peek, and is Empty.
Page: (99,110)
*/

//Clarifying Questions
// 1. Array will be the base data structure that houses the stack
// 2. Does not have to be done in place

//List of Solutions vs. Tradeoffs
// 1. Insertion Stack Sort - Compare to neighbor and swap if needed (worst case quick sort). -> O(n) -> O(n^2) (NOT APPLICABLE)
// *2. Min Heap Sort - Insert elements in correct order -> Insertion: O(1) -> O(n), Pop: O(1) -> O(n)

//Pseudocode
/*
    push:
        1. for each element in stack, check if val is lower.
        2. When lowest value found or at end insert that element and shift everything else down
    pop:
        1. for each element in stack, check if val is equal.
        2. When value found remove that element and shift everything else up {array.splice(index, 1);}
        3. else return no value found
*/


//Implementation
class Stack {
    constructor() {
        this.stack = new Array();
    }

    push(val) {
        // if(this.stack.length == 0){
        //     this.stack.push(val);
        // }

        for (let i = 0; i < this.stack.length; i++) {
            if (val < this.stack[i]) {
                this.stack.splice(i, 0, val);
                return;
            }
        }

        this.stack.push(val);

    }

    peek() {
        return this.stack[0];

    }

    pop() {
        this.stack.splice(0, 1);
    }

    poke() {

    }
}



//Testing
let s = new Stack();
s.push(3);
s.push(2);
s.push(1);
s.push(-1);
s.pop();
console.log(s.stack);