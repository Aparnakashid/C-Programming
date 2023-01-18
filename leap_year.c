//Any year is input through the keyboard . write a program to determine whether the year is a leap year or not .(hint : use the % (modulus) operator)


#include<stdio.h>
int main()
{

int year;
	printf("\n Enter the year : ");
	scanf("%d",&year);

	if(year%4==0)
	{ 
		printf("%d is leap year \n",year);
	}

	else
	{
		printf("%d is not leap year \n",year);
	}

	return 0;
}




