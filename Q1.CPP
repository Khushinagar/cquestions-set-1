#include<stdio.h>
#include<conio.h>
int main ()
{ clrscr();
int a,b;
int sum;
printf("Enter First value:");
scanf("%d", &a);
printf("Enter Second value:");
scanf("%d", &b);
sum = a+b;
if(a==b)
{
printf("%d", sum*3);
}
else
printf("%d", sum);
return (0);
}