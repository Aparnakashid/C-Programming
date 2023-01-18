/*if cost price and selling price of an item is input through the keyboard , write a program to determine whether the seller has made profit or incurred loss. also determine how much profit he made or loss he incurred.*/



#include<stdio.h>
int main()
{

int cost_price, selling_price , total_profit , total_loss;

printf("\n Enter the cost price of the product : ");
scanf("%d",&cost_price);


printf("\n Enter the selling price of the product : ");
scanf("%d",&selling_price);

if(selling_price > cost_price)
{
	total_profit = selling_price - cost_price;
	printf("the profit is %d ",total_profit);
}
else if(cost_price > selling_price)
{

	total_loss = cost_price - selling_price;
	printf("the loss is %d ",total_loss);

}
else
{

	printf("neither profit nor loss");

}

return 0;

}
