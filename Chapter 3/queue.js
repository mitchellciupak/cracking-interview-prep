// 3 - Stacks and Queues
// Mitchell Ciupak
// 202012123

/*
Implament a queue
Page: (96,107)
*/

class Queue {

    constructor() {
        this.queue = [];
        this.first = 0;
        this.last = 0;
    }

    remove() {
        if (this.first == 0) {
            return;
        }

        this.first += 1;
    }

    add(item) {
        this.queue.push(item);
        this.last += 1;
        return true;

    }

    peek() {
        return this.queue[this.first];
    }

    isEmpty() {
        return this.first == 0;
    }
}