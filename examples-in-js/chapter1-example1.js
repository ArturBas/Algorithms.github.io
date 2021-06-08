let a = [3,9,5,2,6,15,16]; /* an example set of values for checking the algorithm correctness */
let n = a.length;
let i = 0;
let sum = 0;

for (i; i <= (n - 1); i++) {
    sum = a[i] + sum;
}

console.log(sum); /* printing the result */