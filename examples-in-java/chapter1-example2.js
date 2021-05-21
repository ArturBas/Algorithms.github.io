function findValueInArray (array, valueToFind) {
    let i = 0;
    array.push(valueToFind);
    while (array[i] !== valueToFind) {
        i++;
    }
    if (i < array.length - 1) {
        console.log("the array includes the valueToFind with the " + i + "-index");
    } else {
        console.log("the array does not include the value to find");
    }
}

/* check the function: example where array does not include the value */
findValueInArray([3,9,5,2,6,7,0], 4);

/* check the function: example where array includes the value */
findValueInArray([3,9,5,2,6,7,0], 6);