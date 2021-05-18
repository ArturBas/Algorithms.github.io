function findValueInArray(array, valueToFind) {
    let text;
    for (i = 0; i < array.length; i++) {
        if (array[i] == valueToFind) {
            text = 'the array includes the valueToFind with the ' + i + '-index';
            break;
        } else {
            text = 'the array does not include the valueToFind';
        }
    }
    console.log(text);
}

/* check the function: example where array does not include the value */
findValueInArray([3,9,5,2,6,7,0], 4);

/* check the function: example where array includes the value */
findValueInArray([3,9,5,2,6,7,0], 6);