
/*If a five-digit number is input through the keyboard, write a
program to reverse the number.*/





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
sum=a*10000+b*1000+c*100+d*10+e;
printf("\n reverse number is : %d",sum);



return 0;

}
