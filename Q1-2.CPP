#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int a, b,sum;
printf("Enter two number:");
scanf("%d%d", &a,&b);
sum=a+b;
printf("%d", a==b?sum*3:sum);
return(0);
}