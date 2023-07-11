/**
 * Given a non-negative int n, compute recursively (no loops) the count of the occurrences of 8 as
a digit, except that an 8 with another 8 immediately to its left counts double, so 8818 yields 4.
Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes
the rightmost digit (126 / 10 is 12).
 * 
 
 * 
*/

 int count8(int n) 
 {
    if (n == 0) 
    {
        return 0;
    }
    int lastDigit = n % 10;
    int remainingDigits = n / 10;
    if (lastDigit == 8) {
        // check if the previous digit is also 8
        int secondLastDigit = remainingDigits % 10;
        if (secondLastDigit == 8) {
            return 2 + count8(remainingDigits); // count both 8s
        } else {
            return 1 + count8(remainingDigits); // count only one 8
        }
    } else {
        return count8(remainingDigits); // no 8 found, recurse on remaining digits
    }
}


