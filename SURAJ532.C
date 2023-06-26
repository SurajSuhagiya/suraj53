// Write a program to create a menu-driven program for telecom call service conversation using nested switch case.
#include<stdio.h>
#include<conio.h>

void main(){
int choice,english,hindi,gujarati;
clrscr();

printf("==================================\n");
printf("+++++++TELECOM CALL SERVICE+++++++\n");
printf("==================================\n");
printf("Press 1 for english \n");
printf("Press 2 for hindi \n");
printf("Press 3 for gujarati \n");

printf("Enter the language : ");
scanf("%d",&choice);
switch(choice){

case 1 :
       printf("Press 1 for internet recharge \n");
       printf("Press 2 for top-up recharge \n");
       printf("Press 3 for special recharge \n");
       printf("Enter your language :");
       scanf("%d",&choice);
       switch(english){
       case 1 :
       printf("You have successfully done internet recharge...\n");
       break;
       case 2 :
       printf("You have successfully done top-up recharge...\n");
       break;
       case 3 :
       printf("You have successfully done special recharge...\n");

       default :
       printf("No plan available...\n");
       }

case 2 :
       printf("Internet recharge ke liye 1 dabaiye \n");
       printf("Top-up recharge ke liye 2 dabaiye \n");
       printf("Special reacharge ke liye 3 dabaiye \n");
       printf("Enter your choice : ");
       scanf("%d",&hindi);
       switch(hindi){
       case 1 :
       printf("Aapne safaltapurvak internet recharge kar liya he...\n");
       break;
       case 2 :
       printf("Aapne safaltapurvak top-up recharge kar liya he...\n");
       break;
       case 3 :
       printf("Aapne safaltapurvak special recharge kar liya he...\n");
       break;

       default :
       printf("koi plan available nahi he \n");
       }

case 3 :
       printf("Internet recharge mate 1 dabavo \n");
       printf("Top-up recharge mate 2 dabavo \n");
       printf("Special recharge mate 3 dabavo \n");
       printf("Enter your choice : ");
       scanf("%d",&gujarati);
       switch(gujarati){
       case 1 :
       printf("Tame safaltapurvak internet recharge karyu che \n");
       break;
       case 2 :
       printf("Tame safaltapurvak top-up recharge karyu che \n");
       break;
       case 3 :
       printf("Tame safaltapurvak special recharge karyu che \n");
       break;

       default:
       printf("koi plan available nathi /n");
       }
}

getch();
}