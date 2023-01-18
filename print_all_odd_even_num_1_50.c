
#include<stdio.h>
int main()
{

	int inum;

	printf("\n All odd number between 1 to 50 \n");
	for(inum=1;inum <= 50; inum++)
	{
		if(inum % 2 !=0)
		{
			
			printf("\n%d",inum);
		}
	}	

	printf("\n-------------------------------------------\n");
	printf("\nAll even number between 1 to 50\n");
	for(inum=1;inum<=50;inum++)
	{
		if(inum % 2 ==0)
		{
			printf("\n%d",inum);
		}
	}

return 0;

}
