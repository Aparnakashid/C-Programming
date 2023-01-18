/* Write a cprogram to display the sizeof datatype like char , int , float and double*/




#include<stdio.h>
int main()
{

	char ch1,ch2,ch3;		 //character datatype
	int iNum1,iNum2,iNum3;	 //Integer datatype
	float fNum1,fNum2,fNum3;	 //float datatype
	double dNum1,dNum2,dNum3; //float datatype

	printf("\n Memory size of the following datatypes");
	printf("Size of Character data type is %d\n ",sizeof(char));
	printf("Size of Integer data type is %d\n ",sizeof(int));
	printf("Size of Float data type is %d\n ",sizeof(float));
	printf("Size of Double data type is %d\n ",sizeof(double));




	return 0;
}
