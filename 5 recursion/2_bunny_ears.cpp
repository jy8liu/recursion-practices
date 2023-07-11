/**
 * We have a number of bunnies and each bunny has two big floppy ears. 
 * We want to compute the total number of ears across all the bunnies recursively (without loops or multiplication).
 * 
*/

#include <string>
using namespace std;

int bunnyEars(int n)
{
    if (n== 1) return 2;
    else if (n == 0) return 0;
    return n + bunnyEars(n-1);
}