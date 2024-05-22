#include <stdio.h>
#include <stdlib.h>
#include "NumClass.h"


//help function to calculate power of given number in recursion
int pow(int base, int pow_){
 if(pow_ == 0) return 1;
 if(pow_ == 1) return base;
 return base*pow(base, pow_-1);
}


int numOfDigits(int n){
 if(n == 0) return 0;
 return 1+numOfDigits(n/10);
}

/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrongRec(int num, int digitNum){
 if(num == 0) return 0;
 int digit = num%10;
 return pow(digit, digitNum) + isArmstrongRec(num/10, digitNum);
}


int isArmstrongRecursive(int num){
int nDig = numOfDigits(num);
int armstrongSum =  isArmstrongRec(num, nDig);
return (armstrongSum == num) ? 1 : 0;
}



// help function that returns the reverse of digits
int isPalindromeRec(int num, int revers){
if(num == 0) return revers; 

revers = revers*10 + num%10;
return isPalindromeRec(num/10, revers);
}


int isPalindromeRecursive(int num){
 int revers = isPalindromeRec(num, 0);
 return (revers == num) ? 1 : 0 ;
}
