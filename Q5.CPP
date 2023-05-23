#include<stdio.h>
#include<conio.h>
float radius; //float = datatype use to store point values
float volume;
const float pi=3.14;
// all above varible are global variable we can use them all functions in origram

int main()
{      clrscr();
printf("input the radius of sphere : ");
scanf("%f",&radius);
volume=(4.0/3.0) * pi * (radius*radius*radius); //formula to find out volume
printf("%f", volume);
return (0);
}