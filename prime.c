#include<stdio.h>
 int checkPrime(int number);
 
int main() {
   
  int n,res;
  printf("Enter a positive integer: ");
  scanf("%d", &n);
  res= checkPrime(n);
  if(res==1){
  printf("number ids non-prime");
  }
  else{
      printf(" number is prime");
  }
}
  
  
 //function for prime 
int checkPrime(int number)
{
  int count = 0;
  for(int i=2; i<=number/2; i++)
  {
     if(number%i == 0) //condition for non-prime
     {
       count=1;
       break;
     }
  }
  if(number == 1) count = 1;
  return count;
}
