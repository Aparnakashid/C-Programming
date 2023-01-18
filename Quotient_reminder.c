#include<stdio.h>
int main()
{
	int dividend, divisor, quotient,reminder;
	printf("Enter dividend :");
	scanf("%d",&dividend);
	printf("Enter divisor :");
	scanf("%d",&divisor);

	//Computes quotient
	quotient=dividend/divisor;
	
	//Computes Reminder
	reminder=dividend%divisor;

	
	printf("Quotient = %d\n",quotient);
	printf("Reminder = %d",reminder);

	return 0;
}
