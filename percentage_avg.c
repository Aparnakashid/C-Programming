 #include<stdio.h>
int main()
{
		float eng,phy,chem,math,comp;
		float total, average, percentage;




		/*Input marks of all subjects*/
		printf("Enter marks of 5 subjects : \n");
		scanf("%f%f%f%f%f", &eng,&phy,&chem,&math,&comp);



		/*calculate total average and percentage */
		total=eng+phy+chem+math+comp;
		average=total/0.5;
		percentage=(total/500.0)*100;

		
		/*print all results*/
		printf("Total marks =%.2f \n",total);
		printf("Average marks = %.2f \n",average);
		printf("Percentage =%.2f", percentage);


		return 0;
}
