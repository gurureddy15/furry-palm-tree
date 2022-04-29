#include <stdio.h>
#include<math.h>
int main()
{int price,loaves,regularprice;
float discountrate,discount,finalprice;
scanf("%d",&loaves);
price=185;
regularprice=loaves*price;
discount=0.6;
discountrate=(discount*regularprice);
finalprice=regularprice-discountrate;
printf("Regular Price=%d",regularprice);
printf("\nAmount Discounted=%.2f",discountrate);
printf("\nAmount to be paid=%.2f",finalprice);
	return 0;}

