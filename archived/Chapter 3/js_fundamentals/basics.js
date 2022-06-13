// Basic Java Script
// Mitchell Ciupak
// 20201221

// Variables
var x = 5;
let y = 6; //defined w/ restricted scope
const z = 7; //cannot be reassigned

// Arrays
var cars = ["Saab", "Volvo", "BMW"];

// Objects
var person = { firstName: "John", lastName: "Doe", age: 50, eyeColor: "blue" };

// Events

/// HTML are "things" that happen to HTML elements when JS is used in an HTML page.
/// JS can then "react" on these events.

// let htmlevent = {< button onclick = "document.getElementById('demo').innerHTML = Date()" > The time is?</button> };

//Functions
function toCelsius(fahrenheit) {
    return (5 / 9) * (fahrenheit - 32);
}

//Loops
// for - loops through a block of code a number of times
for (i = 0; i < 5; i++) {
    text += "The number is " + i + "<br>";
}
//---//
var i = 0;
var len = cars.length;
for (; i < len;) {
    text += cars[i] + "<br>";
    i++;
}

// for/in - loops through the properties of an object
var person = { fname: "John", lname: "Doe", age: 25 };

var text = "";
var x;
for (x in person) {
    text += person[x];
}

// for/of - loops through the values of an iterable object
var cars = ["BMW", "Volvo", "Mini"];
var x;

for (x of cars) {
    document.write(x + "<br >");
}

//--looping over a string--//
var txt = "JavaScript";
var x;

for (x of txt) {
    document.write(x + "<br >");
}

// while - loops through a block of code while a specified condition is true
while (i < 10) {
    text += "The number is " + i;
    i++;
}

// do/while - also loops through a block of code while a specified condition is true
do {
    text += "The number is " + i;
    i++;
}
while (i < 10);

// Conditionals
if (time < 10) {
    greeting = "Good morning";
} else if (time < 20) {
    greeting = "Good day";
} else {
    greeting = "Good evening";
}