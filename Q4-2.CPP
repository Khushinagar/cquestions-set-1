#include<stdio.h>
#include<string.h>
#include<conio.h>
int main()       //main function
{    clrscr();
char a[10],i;
printf("enter astring");
scanf("%s",&a);    //stor input value

printf("%d", strlen(a)); // strlen= function to find a string length
return(0);
}