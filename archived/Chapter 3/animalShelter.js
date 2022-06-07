// 3.5 - Animal Shelter
// Mitchell Ciupak
// 20210108

/*
An animal shelter, which holds only dogs and cats, operates on a strictly"first in, first
out" basis. People must adopt either the "oldest" (based on arrival time) of all animals at the shelter,
or they can select whether they would prefer a dog or a cat (and will receive the oldest animal of
that type). They cannot select which specific animal they would like. Create the data structures to
maintain this system and implement operations such as enqueue, dequeueAny, dequeueDog,
and dequeueCat. You may use the built-in Linked list data structure.
Page: (99,110)
*/

//Clarifying Questions


//List of Solutions vs. Tradeoffs


//Pseudocode


//Implementation

function getRandomInt(max) {
    return Math.floor(Math.random() * Math.floor(max));
}

class Queue {
    constructor() {
        this.dogQueue = new Array();
        this.catQueue = new Array();
    }

    enqueue(name, animal) {
        if (animal == 'dog' || animal == 'Dog') {
            this.dogQueue.push(name);
        } else if (animal == 'cat' || animal == 'Cat') {
            this.catQueue.push(name);
        } else { return "Sorry, we only take dogs and cats." }
    }

    dequeueAny() {
        let chooice = getRandomInt(2);

        if (chooice == 0) return this.dequeueDog();

        return this.dequeueCat();
    }

    dequeueDog() {

        if (this.dogQueue.length == 0) {
            return 0;
        }

        return this.dogQueue.pop();

    }

    dequeueCat() {

        if (this.catQueue.length == 0) {
            return 0;
        }

        return this.catQueue.pop();
    }

}



//Testing
let q = new Queue();
q.enqueue('spot', 'dog');
q.enqueue('jeff', 'cat');
q.enqueue('toby', 'dog');
q.enqueue('peaches', 'dog');
q.enqueue('blitz', 'dog');
q.dequeueDog();
console.log(q.dogQueue);