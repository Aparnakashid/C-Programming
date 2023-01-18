#include<stdio.h>
int main()
{
		char ch;
		do
		{
			int inum1,inum2,choice,res;
	
			printf("\n Enter the num1 : ");
			scanf("%d",&inum1);

			printf("\n Enter the num2 : ");
			scanf("%d",&inum2);

			printf("\n*******************Arithmatic Operations*******************");
			printf("\n \n 1.addition \n 2.substraction \n 3.multiplication , \n 4.division \n");

			printf("\n Enter your choice : ");
			scanf("%d",&choice);

	        	switch(choice)
			{
				case 1:
				{
					int res=inum1+inum2;
					printf("Addition of %d and %d is %d",inum1,inum2,res);
				}
				break;
				case 2:
				{
					int res=inum1-inum2;
					printf("substraction of %d and %d is %d",inum1,inum2,res);
				}
				break;
				case 3:
				{
					int res=inum1*inum2;
					printf("multiplication of %d and %d is %d",inum1,inum2,res);
				}
				break;
				case 4:
				{
					int res=inum1/inum2;
					printf("division of %d and %d is %d",inum1,inum2,res);
				}
				break;
				case 5:
				{
					int res=inum1%inum2;
					printf("modulus of %d and %d is %d",inum1,inum2,res);
	
				}
				break;
				default:
				{
					printf("\n Invalid choice \n");
				}
			}
		
		

			printf("\n DO YOU WANT TO CONTINUE . . .\n");
			scanf("%c",&ch);
			scanf("%c",&ch);
		}while (ch =='y' || ch=='Y');
		

		return 0;

}

