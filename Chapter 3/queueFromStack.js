// 3.4 - Queue via Stacks
// Mitchell Ciupak
// 20201231

/*
Implement a MyQueue class which implements a queue using two stacks
Page: (99,110)
*/

//Clarifying Questions
// 1. Array will be the base data structure
// 2. It is assumed there is a stack class

//List of Solutions vs. Tradeoffs
// 1. Make enQueue costly and moves all the elements twice
/* 2. Make dequeue costly and moves all the elements oncee or not at all if null (chosen)
        - PUSH: O(1)
        - POP: o(n), worst case we have empty whole of stack 1 into stack 2
*/

//Pseudocode
// SKIPPED for this problem


//Implementation

class Queue {
    this.stack1 = new Stack();
this.stack2 = new Stack();
}

class QueueFromStack {

    push(top_ref, new_data) { //Function to push an item to stack
        // Push the data onto the stack
        top_ref.push(new_data);
    }

    pop(top_ref) { // Function to pop an item from stack
        if (top_ref.isEmpty()) { //If stack is empty then error
            console.log("Stack Underflow");
            System.exit(0);
        }

        // pop the data from the stack
        return top_ref.pop();
    }

    enQueue(q, x) { //Function to enqueue an item to the queue
        q.stack1.push(x);
    }

    deQueue(q) { //Function to deQueue an item from queue
        var x;

        /* If both stacks are empty then error */
        if (q.stack1.isEmpty() && q.stack2.isEmpty()) {
            console.log("Q is empty");
            return;
        }

        /* Move elements from stack1 to stack 2 only if
        stack2 is empty */
        if (q.stack2.isEmpty()) {
            while (!q.stack1.isEmpty()) {
                x = q.stack1.pop();
                q.stack2.push(x);
            }
        }
        x = q.stack2.pop();
        return x;
    }

    //Testing
    main() {
        /* Create a queue with items 1 2 3*/
        let q = new Queue();
        q.stack1 = new Stack();
        q.stack2 = new Stack();
        enQueue(q, 1);
        enQueue(q, 2);
        enQueue(q, 3);

        /* Dequeue items */
        console.log(deQueue(q) + " ");
        console.log(deQueue(q) + " ");
        console.log(deQueue(q) + " ");
    }
}