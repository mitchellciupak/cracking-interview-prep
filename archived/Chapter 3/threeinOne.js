// 3.1 - Three in one
// Mitchell Ciupak
// 20201231

/*
Describe how you could use a single array to implement three stacks.
Page: (98,109)
*/

// - My approach is stack elements take multiples of 1,2 and 3:
//          stack1 = (idx+1 % 1 == 0)
//          stack2 = (idx+1 % 2 == 0)
//          stack3 = (idx+1 % 3 == 0)

class MultiStack {
    constructor() {
        this.threestacks = []
        this.stackLength = []
    }

    pop(whichStack) {
        if (this.stack.length == 0) {
            return;
        }

        this.stackLength[whichStack - 1] -= 3

        let temp = this.stack[this.stack.length - 1 - (3 - whichStack)];

        this.stack.splice(this.stack.length - 1 - (3 - whichStack), 1)

        return temp;
    }

    push(whichStack, item) {

        this.stack.insert(this.stackLength[whichStack - 1] += 3, item);
        return true;

    }

    peek(whichStack) {
        return this.stack[this.stack.length - 1 - (3 - whichStack)];
    }

    isEmpty(whichStack) {
        return this.peek(whichStack) == null;
    }
}