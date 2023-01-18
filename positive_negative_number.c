/*Write a c program to accept number from user  and check the given number is positive or negative*/






#include<stdio.h>
int main()
{


	int inum;
	printf("\n Enter the number : ");
	scanf("%d",&inum);

	if(inum<0)
	{ 
		printf("%d is negative \n",inum);
	}

	else
	{
		printf("%d is positive \n",inum);
	}

	/*if(inum>0)
	{ 
		printf("%d is positive \n",inum);
	}

	else
	{
		printf("%d is negative \n",inum);
	}

*/

	return 0;
}

