// 3.3 - Stacks of Plates
// Mitchell Ciupak
// 20201231

/*
 Imagine a (literal) stack of plates. If the stack gets too high, it might topple.
Therefore, in real life, we would likely start a new stack when the previous stack exceeds some
threshold. Implement a data structure SetOfStacks that mimics this. SetO-fStacks should be
composed of several stacks and should create a new stack once the previous one exceeds capacity.
SetOfStacks. push() and SetOfStacks. pop() should behave identically to a single stack
(that is, pop () should return the same values as it would if there were just a single stack).

Page: (99,110)
*/

class SetOfStacks {
    constructor(singleStackCapacity, totalCapacity) {
        this.cap = totalCapacity;
        n = totalCapacity / singleStackCapacity;
        this.SetOfStacks = new Array(n);
        for (let i = 0; i < n; ++i) a[i] = new Array(singleStackCapacity).fill(0);
        this.whichStack = 0;
    }

    pop() {
        if (this.SetOfStacks[0].length == 0) {
            return;
        }

        if (this.SetOfStacks[this.whichStack][this.stack.length] == this.cap) {
            this.whichStack -= 1;
        }

        let temp = this.SetOfStacks[this.whichStack][this.stack.length - 1];

        this.stack.splice(this.SetOfStacks[this.whichStack].length - 1, 1)

        return temp;
    }

    push(item) {

        if (this.SetOfStacks[this.whichStack][this.stack.length] == this.cap) {
            this.whichStack += 1;
        }
        this.SetOfStacks[this.whichStack].push(item);
        return true;

    }

    peek() {
        return this.stack[this.SetOfStacks[this.whichStack].length - 1];
    }

    isEmpty() {
        return this.peek() == null;
    }
}