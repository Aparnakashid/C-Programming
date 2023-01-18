/*write a c program to check given number is prime or not*/




#include<stdio.h>
int main()
{
	char ch;
	int inum,i;
	do
	{
		printf("\n Enter the number : \n");
		scanf("%d",&inum);

		for(i=2; i < inum; i++)
		{
			if(inum %i ==0)
			break;
		}
			if(i == inum)
			{
				printf("\n %d is a prime number \n",inum);
			}
			else
			{
				printf("\n %d is not a prime number \n",inum);
			}
		printf("\n DO YOU WANT TO CONTINUE . . .\n");
		scanf("%c",&ch);
		scanf("%c",&ch);
	}while(ch == 'y' || ch == 'Y');


	return 0;
	
}
