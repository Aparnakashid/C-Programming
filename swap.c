/*without third vairable*/




#include<stdio.h>
int main()
{

int a,b;
printf("\nEnter two numbers : ");
scanf("%d%d",&a,&b);

a=a+b;
b=a-b;
a=a-b;

printf("\nAfter swapping value of a is %d :",a);
printf("\nAfter swapping value of b is %d :",b);

return 0;

}


