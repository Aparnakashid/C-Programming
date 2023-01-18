/*Two numbers are input through the keyboard into two
locations C and D. Write a program to interchange the
contents of C and D.*/



#include<stdio.h>
int main()
{
int a,b,temp;
printf("\nEnter two numbers : ");
scanf("%d%d",&a,&b);

temp=a;
a=b;
b=temp;
printf("After swapping value of a is %d :");
printf("After swapping value of b is %d :");

return 0;

}
