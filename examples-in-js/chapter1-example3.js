let a = [3,9,5,2,6,15,16]; // an example set of values for checking the algorithm correctness
let n = a.length;
let i = 1;
let k = 0;
let max = a[0];

for (i; i <= (n - 1); i++) {
    if (max < a[i]) {
        k = i;
        max = a[k]
    }
}

console.log(max); // printing the result