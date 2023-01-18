/*Write a c Program to declare and accept character , int and float datatype and display the value of all accepted variables.*/


#include<stdio.h>
int main()
{

	char ch1,ch2,ch3;		 //character datatype
	int iNum1,iNum2,iNum3;	 //Integer datatype
	float fNum1,fNum2,fNum3;	 //float datatype
	//double dNum1,dNum2,dNum3 //float datatype

	
	printf("\n==============");
	printf("\n Enter the characters1 : ");
	//scanf("%c ",&ch1);
	//printf("\n Enter the characters2 : ");
	//scanf("%c ",&ch1); 
	//printf("\n Enter the characters3 : ");
	//scanf("%c",&ch1); 
//OR
	scanf("%c%c%c",&ch1,&ch2,&ch3);
	printf("ch1 : %c\n",ch1);
	printf("ch2 : %c\n",ch2);
	printf("ch3 : %c\n",ch3);

	printf("\n Enter the integer : ");
	scanf("%d%d%d",&iNum1,&iNum2,&iNum3);
	printf("iNum1 : %d\n",iNum1);
	printf("iNum2 : %d\n",iNum2);
	printf("iNum3 : %d\n",iNum3);

	printf("\n Enter the Float : ");
	scanf("%f%f%f",&fNum1,&fNum2,&fNum3);
	printf("fNum1 : %f\n",fNum1);
	printf("fNum2 : %f\n",fNum2);
	printf("fNum3 : %f\n",fNum3);





return 0;

}

