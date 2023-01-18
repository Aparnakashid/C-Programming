/*Write a c program to accept three number from user  and find the smaller number between them*/




#include<stdio.h>
int main()
{


	int a,b,c;
	printf("\n Enter the number : ");
	scanf("%d%d%d",&a,&b,&c);

	if(a<b&&a<c)
	{ 
		printf("%d is smaller than %d and %d  \n",a,b,c);
	}

	else if(a>c)
	{
		printf("%d is smaller than %d and %d  \n" ,b,a,c);
	}
	else
	{
		printf("%d is smaller than %d and %d  \n" ,c,a,c);
	}

	return 0;
}
