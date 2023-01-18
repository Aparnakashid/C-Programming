/*Write a c program to display the output of expression like 
 < , > , == ,!=, || , && */


#include<stdio.h>
int main()
{

	int num1, num2;
	printf("\nEnter the value of num1 : ");
	scanf("%d",&num1);

	printf("\nEnter the value of num2 : ");
	scanf("%d",&num2);


	printf("\n===================================\n");
	printf("output of num1 < num2 is  : %d",num1 < num2);

	printf("\n===================================\n");
	printf("output of num1 > num2 is  : %d",num1 > num2);

	printf("\n===================================\n");
	printf("output of num1 == num2 is  : %d",num1 == num2);

	printf("\n===================================\n");
	printf("output of num1 != num2 is  : %d",num1 != num2);

	printf("\n===================================\n");
	printf("output of num1 || num2 is  : %d",num1 || num2);

	printf("\n===================================\n");
	printf("output of num1 && num2 is  : %d",num1 && num2);



	return 0;

}
