let isLeapYear = (year: int) : bool =>
  year mod 100 == 0 ? year mod 400 == 0 : year mod 4 == 0;

/* This will get turned into a ternary as above */
/* let leapYearSwitch = (year: int): bool =>{
     switch (year mod 100 == 0) {
       | true => (year mod 400 == 0)
       | false => (year mod 4 == 0)
     }
   }; */
/* Alternate solution */
let isLeapYear2 = (year: int) : bool =>
  year mod 4 == 0 && ! (year mod 100 == 0) || year mod 400 == 0;