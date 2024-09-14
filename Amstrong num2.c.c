#include<stdio.h>
#include<math.h>
int main() {
  int n, temp, rem, result = 0; 
  printf("Enter a number: ");
  scanf("%d", &n);
  temp = n;
  while( temp != 0) {
    rem = temp % 10;
    result = result + rem*rem*rem;
    temp = temp / 10;
  }
  if (result == n) {
      printf("It is a prime number.\n",n);
  }
  else {
      printf("It is not a prime number.\n",n);
}
  }
    
  



 