 /*Decision using Switch - add, sub, mul, div*/


#include<stdio.h>
int main()
{

int inum1,inum2,choice;
printf("\n Enter the inum1 :  ");
scanf("%d",&inum1);

printf("\n Enter the inum2 :  ");
scanf("%d",&inum2);

printf("\n *********************Arithmatic Operations**************");
printf("\n 1.Add \n 2.Sub \n3.Mul \n4.Div\n");
printf("\n Enter your choice : ");
scanf("%d",&choice);

switch(choice)
{
	case 1:
	{
		int res=inum1+inum2;
		printf("\n Addition of %d and %d is %d\n",inum1,inum2,res);
	}
	break;
	case 2:
	{

		int res=inum1-inum2;
		printf("\n substration of %d and %d is \n",inum1,inum2,res);
	}
	break;
	case 3:
	{
		int res=inum1*inum2;
		printf("\n Multiplication of %d and %d is \n",inum1,inum2,res);
	}
	break;
	case 4:
	{

		int res=inum1/inum2;
		printf("\n division of %d and %d is \n",inum1,inum2,res);
	}
	break;
	default:
	{
		printf("\nInvalid choice\n");
	}
}
return 0;

}

