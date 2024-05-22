#include <stdio.h>
#include "NumClass.h"


//help function to calculate the factorial of a given number in recursion
int factorial(int n){
  if(n == 0 || n == 1) return 1;
  return n*factorial(n-1);
}


int isPrime(int num){
 for(int i=2; i < num/2 ; i++){
   if(num%i == 0) return 0; //FALS
 }
 return 1; //TRUE
}

/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int num){
int ans = 0 , digit = 0;
int original_num = num;

  while(num/10){
  digit = num%10;
  ans += factorial(digit);
  num = num/10 ;
  }

 return (ans == original_num) ? 1 : 0; 
 }

