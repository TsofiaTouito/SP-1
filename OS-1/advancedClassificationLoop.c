#include <stdio.h>
#include <stdlib.h>
#include "NumClass.h"


int numOfDigits(int n){
 int count = 0;
    while(n > 0){
      count++;
     n = n/10;
 }
   return count;
}


/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 43 + 03 + 73 = 64 + 0 + 343 = 407
*/
int isArmstrong(int num){
int sum = 0;
int nDig = numOfDigits(num);
int dig = 0;

for(int i = 0 ; i < nDig ; i++){
    dig = num%10;
    sum += pow(dig, nDig);
    num = num/10;
}
return (sum == num) ? 1 : 0;
}


// will return if a number is a palindrome 
int isPalindrome(int num){
int revers = 0, digit = 0;

  while(num > 0){
   digit = num%10;
   revers = revers*10 + digit;
   num = num/10;
   }

return (revers == num) ? 1 : 0;
}
