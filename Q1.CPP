// add two numbers if two nos are same then sum will be 3x


#include<stdio.h>  //header files
#include<conio.h>  // header files
int main ()        
{ clrscr();
int a,b;                       // variables
int sum;
printf("Enter First value:");
scanf("%d", &a);
printf("Enter Second value:");    //take two inputs from user 
scanf("%d", &b);
sum = a+b;
if(a==b)   // if-else loop conditions
{
printf("%d", sum*3);
}
else
printf("%d", sum);
return (0);
}