/**
 * Given n of 1 or more, return the factorial of n, which is n * (n-1) * (n-2) ... 
 * 1. Compute the result recursively (without loops).
 *
 * 
*/
using namespace std;


// 1) figure out the starting point THE RETURN ___ ON THE FIRST STEP 2) map out the next step 3) find an equation
// its like working from the largest
int factorial(int n)
{
   if (n == 1 || n == 0) return 1; //i get the basis but its still wonky
   return n * factorial(n-1) ; 
}