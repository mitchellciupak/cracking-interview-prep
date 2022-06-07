// 3.2 - Stack Min
// Mitchell Ciupak
// 20201231

/*
How would you design a stack which, in addition to push and pop, has a function min
which returns the minimum element? Push, pop and min should all operate in 0(1) time.
Page: (98,109)
*/

class Stack {
    constructor() {
        this.stack = [];
        this.min = 0;
        this.lastmin = 0;
    }

    pop() {
        if (this.stack.length == 0) {
            return;
        }

        let temp = this.stack[this.stack.length - 1];

        if (temp == this.min) {
            this.min = this.lastmin;
        }

        this.stack.splice(this.stack.length - 1, 1);

        return temp;
    }

    push(item) {

        if (this.stack.length == 0 || item < this.min) {
            this.lastmin = this.min;
            this.min = item;
        }
        this.stack.push(item);
        return true;

    }

    peek() {
        return this.stack[this.stack.length - 1];
    }

    isEmpty() {
        return this.peek() == null;
    }

    min() {
        return this.min;
    }
}