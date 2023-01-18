/*Write a c program to accept number from user  and check the given number is Even or Odd*/


/*
#include<stdio.h>
int main()
{


	int inum;
	printf("\n Enter the number : ");
	scanf("%d",&inum);

	if(inum%2==0)
	{ 
		printf("%d is even \n",inum);
	}

	else
	{
		printf("%d is odd \n",inum);
	}

	return 0;
}

*/




#include<stdio.h>
int main()
{ 

int a;
printf("\n Enter the number : ");
scanf("%d",&a);

if(a%2==0)
{

	printf("%d is even \n ",a);
}
else
{

	printf("%d id odd \n ",a);

}
return 0;


}
