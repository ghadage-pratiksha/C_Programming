#include<stdio.h>
float IncomeTax(int iAmount)
{
    if(iAmount < 500000)
    {
        return 0;
    }
    else if(iAmount < 1000000)
    {
        return iAmount * 0.10;
    }
    else if(iAmount < 2000000)
    {
        return iAmount * 0.20;
    }
    else
    {
        return iAmount * 0.30;
    }
}

int main()
{
    int iIncome;

    printf("Enter Gross Income: ");
    scanf("%d", &iIncome);

    float fTax = IncomeTax(iIncome);

    printf("Tax Amount = %f\n", fTax);

    return 0;
}