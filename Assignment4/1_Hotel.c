#include<stdio.h>

float CalculateBill(int iAmount)
{
	if(iAmount > 1500)
	{
	    float iAmount1 = (iAmount/100) * 15 ;
	    float iDiscountAmount1 = iAmount - iAmount1 ;
		printf("You got 15 percent Discount : %f", iAmount1);
		printf("\nPlease pay the below Amount!");
		printf("\n%f",iDiscountAmount1);
		
	}
	else if(iAmount < 1500 && iAmount > 500)
	{
	    float iAmount2 = (iAmount/100) * 10 ;
	   	float iDiscountAmount2 = iAmount - iAmount2 ;
		printf("You got 10 percent Discount : %f",iAmount2);
        printf("\nPlease pay the below Amount!");
        printf("\n%f",iDiscountAmount2);
	}
	else if(iAmount < 500)
	{	
		printf("No discount");
		printf("Please pay the below Amount! \n%d", iAmount);
	}
	
	printf("\nThank you.. Visit again!!");
}


int main()
{
	int iValue = 0;

	printf("Enter the amount of bill : ");
	scanf("%d",&iValue);
	
	float iBill = CalculateBill(iValue);

	return 0;
}

