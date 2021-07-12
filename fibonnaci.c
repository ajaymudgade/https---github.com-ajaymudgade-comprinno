#include<stdio.h>
#include<conio.h>
void main(){
int f1=0, f2=1, fib, i, num;
 printf("\n Enter number : ");
 scanf("%d", &num);

 i =1 ;
 printf("\n%d\n%d\n", f1, f2);

  while (i < num)
  {
    fib = f1 + f2;
    f1 = f2;
    f2 = fib;

    printf("%d\n", fib);
    i++;
  }
getch();
}   