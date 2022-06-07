// Array Methods
// Mitchell Ciupak
// 20201221

// Arr to String
var fruits = ["Banana", "Orange", "Apple", "Mango"];
document.getElementById("demo").innerHTML = fruits.toString();

// Join
document.getElementById("demo").innerHTML = fruits.join(" * ");

//Pop, Remove last element
var x = fruits.pop(); // the value of x is "Mango"

//Shift, Remove first element
var x = fruits.shift();    // the value of x is "Banana"

//Push, Add to end
var x = fruits.push("Kiwi");   //  the value of x is 5

//Unshift, Add to beg
fruits.unshift("Lemon");    // Adds a new element "Lemon" to fruits and returns 5

//Delete
delete fruits[0]; //changes the first element in fruits to undefined

//Splice
fruits.splice(2, 0, "Lemon", "Kiwi");