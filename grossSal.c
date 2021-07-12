#include<stdio.h>
#include<conio.h>
void main(){

    long int bs, da, hra, toatal;

    printf("Enter Basic Salary:");
    scanf("%ld\n", &bs);

    da = bs * 10/100;

    hra = bs * 10/100;

    toatal = bs + da + hra; 

    printf("toatal %ld", toatal);

getch(); 
}
