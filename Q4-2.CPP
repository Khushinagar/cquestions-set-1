#include<stdio.h> //header files that contain predifind function such as printf, scanf
#include<string.h>//header files that contain predifind function such as strlen(use to find string lenth)
#include<conio.h>//header files that contain predifind function such as clrscr
int main()       //main function (execution starts from here)
{    clrscr(); // a function use to clean o/p scrn
char a[10],i;  //variabls to store input values
printf("enter astring");    // take input from user
scanf("%s",&a);    //stor input value

printf("%d", strlen(a)); // strlen= function to find a string length
return(0);     //return values
}// execution ends here 