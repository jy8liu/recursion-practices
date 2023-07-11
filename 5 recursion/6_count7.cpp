/**
 * Given a non-negative int n, return the count of the occurrences of 7 as a digit, so for example
717 yields 2. (no loops). 

Note that mod (%) by 10 yields the rightmost digit (126 % 10 is 6), while
divide (/) by 10 removes the rightmost digit (126 / 10 is 12).
 * 
 * 
*/

// function to count the number of 7 in the given integer 'n'
int count7(int n){
    
    // return 0 if we hit the base case
    // as here when we reach 0 then number of 7 in '0' is zero 
    // so return 0 here
    if(n==0){
        
        return 0;
    
    }
    
    // declare a variable named count
    int count=0;
    
    // if the last digit of the number is 7 then increment count by 1
    // find the last digit of the number using '%' operator
    if(n%10==7) count++;
    
    // divide the number by 10
    n=n/10;
    
    // return the result of count plus answer of recursion
    // call recursion by count7(n)
    return count+count7(n);
}