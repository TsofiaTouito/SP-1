#include "NumClass.h"
#include <stdio.h>
#include <limits.h>
#include "advancedClassificationRecursion.c"
#include "advancedClassificationLoop.c"
#include "basicClassification.c"

int main(){

int a, b;

// Receive the numbers from the user
//And ensure the user enters valid positive integers (greater than 0)
// this to avoid errors in the functions use
while(1){
  scanf("%d", a);
  if(0 < a && a < INT_MAX){
    break;
  }
}

while(1){
  scanf("%d", b);
  if(0 < b && b < INT_MAX){
    break;
  }
}


//
printf("The Armstrong numbers are: ");
for(int i = a ; i <= b ; i++){
   if(isArmstrong(i)){
     printf("%d ", i);
    }
}

printf("\nThe Palindromes are: ");
for(int i = a ; i <= b ; i++){
   if(isPalindrome(i)){
     printf("%d ", i);
   }
}

printf("\nThe Prime numbers are: ");
  for(int i = a ; i <= b ; i++){
   if(isPrime(i)){
     printf("%d ", i);
   }
}

printf("\nThe Strong numbers are: ");
for(int i = a ; i <= b ; i++){
  if(isStrong(i)){
   printf("%d ", i);
  }
}

  return 0;
}