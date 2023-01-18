/*If a five-digit number is input through the keyboard, write a
program to calculate the sum of its digits.
(Hint: Use the modulus operator ‘%’)*/



#include<stdio.h>
int main()
{

int num,a,b,c,d,e,sum;
printf("\nEnter the five digits : ");
scanf("%d",&num);

a=num%10;
b=(num/10)%10;
c=(num/100)%10;
d=(num/1000)%10;
e=(num/10000);
sum=a+b+c+d+e;
printf("\nsum of digits is : %d",sum);



return 0;

}
