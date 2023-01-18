/*write a c program to accept number user and print the sum of digits example inum = 1234 sum_of_digit =1+2+3+4=10*/



#include<stdio.h>
int main()
{
	char ch;

	do
	{
		
		int inum,temp,sum = 0;

		printf("\n Enter the numbers : ");
		scanf("%d",&inum);
	store=inum
	while(inum > 0)
	{
		temp = inum % 10;
		sum = sum + temp;
		inum = inum / 10;
	}
		printf("\nSum of %d is %d\n",inum,sum);
		printf("\n DO YOU WANT TO CONTINUE . . .\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
	}while (ch =='y' || ch=='Y');
		scanf("%c",&ch);

return 0;

}
