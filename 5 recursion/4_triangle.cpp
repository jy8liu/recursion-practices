/**
 * We have triangle made of blocks. 
 * The topmost row has 1 block, the next row down has 2
blocks, the next row has 3 blocks, and so on. 

Compute recursively (no loops or multiplication)
the total number of blocks in such a triangle with
 the given number of rows.
 * 
 * 
 * 
*/

//this is the same as adding

int triangle(int n)
{
   if (n == 0) return 0;
   
   if (n == 1) return 1;
   
   return n + triangle(n-1); 
}
