// Write a program to find the minimum number from the given 3 numbers using the ternary operator.
#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();
printf("Enter the value of a :");
scanf("%d",&a);
printf("Enter the value of b :");
scanf("%d",&b);
printf("Enter the value of c :");
scanf("%d",&c);

(a>b)?(a>c)?printf("A is minimum...\n")
	   :printf("B is minimum...\n")
     :(b>c)?printf("B is minimum...\n")
	   :printf("C is minimum...\n");

getch();
}