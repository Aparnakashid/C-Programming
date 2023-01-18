#include<stdio.h>
int main()
{
int number,result;
printf("\n Enter the number : ");
scanf("%d",&number);
for(int index =number;index>1;index--)
{
result=result*index;
}
printf("\nresult :");

return 0;
}
