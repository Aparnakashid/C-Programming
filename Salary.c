/*Ramesh’s basic salary is input through the keyboard. His
dearness allowance is 40% of basic salary, and house rent
allowance is 20% of basic salary. Write a program to calculate
his gross salary.*/



#include<stdio.h>
int main()
{

float basic_salary, d_allowance, house_rent, gross_salary;
printf("\n Enter Basic salary:  \n");
scanf("%f",&basic_salary);

d_allowance=0.4*basic_salary;
house_rent=0.2*basic_salary;


gross_salary = basic_salary + d_allowance + house_rent;

printf("\n Basic Salary = %0.2f", basic_salary);
printf("\n d_allowance = %0.2f", d_allowance);
printf("\n house_rent = %0.2f", house_rent);
printf("\n gross_salary = %0.2f", gross_salary);


return 0;

}
