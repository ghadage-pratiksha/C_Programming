#include<stdio.h>
int DollarToINR(int iNo)
{
    int iCurrency = iNo *70;
    return iCurrency;
}
int main()
{
     int iValue=0;
     int iRet =0;
     
     printf("Enter a number of USD:");
     scanf("%d", &iValue);
     
     iRet=DollarToINR(iValue);
     printf("Value of INR is %d",iRet);
     
     return 0;
}