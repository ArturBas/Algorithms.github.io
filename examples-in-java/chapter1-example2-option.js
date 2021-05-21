function findValueInArray (array, valueToFind) {
    let text;
    array.push(valueToFind);
    for (let i = -1; array[i] !== valueToFind; i++) {
        if (i < (array.length - 2)) {
            text = "the array includes the valueToFind with the " + (i + 1) + "-index";
        } else {
            text = "the array does not include the valueToFind";
        } 
    }
    console.log(text);
}

/* check the function: example where array does not include the value */
findValueInArray([3,9,5,2,6,7,0], 4);

/* check the function: example where array includes the value */
findValueInArray([3,9,5,2,6,7,0], 6);
