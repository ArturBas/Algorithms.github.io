// an example set of values for checking the algorithm correctness
let family = [
    {
        male: true,
        birthdate:
        {
            day: "day1",
            month: "month1",
            year: 2001
        }
    },

    {
        male: false,
        birthdate:
        {
            day: "day2",
            month: "month2",
            year: 2005
        }
    },

    {
        male: true,
        birthdate:
        {
            day:"day3",
            month:"month3",
            year:1995
        }
    },

    {
        male: false,
        birthDate:
        {
            day:"day3",
            month:"month3",
            year:2017
        }
    }
];

let n = family.length;
let count = 0;
let i = 0;

for (i; i <= (n-1); i++) {
    if (family[i].male != true & family[i].birthDate.year > 2000) {
        count++;
    }
}
console.log(count); // printing the result