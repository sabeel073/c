#include<stdio.h>
union book{
int num;
char name[1];
float price;
};
int main()
{
  union  book hp;
  hp.num = 50078967;
  hp.price = 1.0;
  strcpy(hp.name,"R");
  printf("Book number: %d\n",hp.num);
  printf("Book name: %s\n",hp.name);
  printf("Book price: %f\n",hp.price);
}