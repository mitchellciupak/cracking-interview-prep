// 3 - Stacks and Queues
// Mitchell Ciupak
// 20201217

/*
Implament a stack
Page: (96,107)
*/

class Stack {
    constructor() {
        this.stack = []
    }

    pop() {
        if (this.stack.length == 0) {
            return;
        }

        let temp = this.stack[this.stack.length - 1];

        this.stack.splice(this.stack.length - 1, 1)

        return temp;
    }

    push(item) {

        this.stack.push(item);
        return true;

    }

    peek() {
        return this.stack[this.stack.length - 1];
    }

    isEmpty() {
        return this.peek() == null;
    }
}