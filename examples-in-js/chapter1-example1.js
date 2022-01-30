let x = 2.5; // an example set of values for checking the algorithm correctness
let y = 1; 
const n = 3; // an example set of values for checking the algorithm correctness
let i;
const isOdd = num => num % 2 === 1;

for (i = n; i > 0; i = Math.floor(i / 2)) {
    if (isOdd(i)) {
        y = y * x;
    }
    x = x * x;
}

console.log(y); // printing the result