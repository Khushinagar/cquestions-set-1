#include<stdio.h>   //header files
#include<conio.h>
int main()
{    clrscr();   //use t clear output screen
char a[6],i;    //variables
printf("enter a string"); //take input from user
scanf("%c",&a);       // store input
for(i=1;a[i]!='\0';i++);
printf("enterd string leanth %d",i);
return (0);
}

//for loop = string library function ke bina string ki lenth find out krne ke liye
//a[i]= string ,, !=(not equal) ,,'\0'= null value, i++post increment