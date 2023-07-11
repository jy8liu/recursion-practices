/**
 * Given a non-negative int n, return the sum of its digits recursively (no loops). 
 * 
 * Note that mod
(%) by 10 yields the rightmost digit (126 % 10 is 6), while divide (/) by 10 removes the rightmost
digit (126 / 10 is 12).
 * 
*/
int sumDigits(int n)
{
   if (n == 0) return 0;
   // handle ones digit and remove it

   return n%10 + sumDigits(n/10); // looks like 1 step and then the function for the next step

}