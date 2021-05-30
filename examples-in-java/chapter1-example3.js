function power(n) {

    let i;
    let k;
    let r;
    let d = [];

    for (k = 0; k <= n-1; k++) {
        r = 0;
        for (i = 0; i <= (k - 1); i++) {
            r = 10 * r + d[i];
            d[i] = Math.floor(r/2);
            r = r - 2 * d[i];
        }
        d[k] = 5;
        console.log("." + d.join(""));
    }
}

/* check function for ten iterations */
power(10);