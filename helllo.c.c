#include <stdio.h>
int main()
{
  int n;
  char str[10];
  printf("enter your name:");
  scanf("%s", str);
    n=strlen(str);
 printf("hello %s, welcome to c programming.", str);
}