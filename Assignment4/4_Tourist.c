#include<stdio.h>

int TouristBill(int iKilometers)
{
    int iCharge1 = 0;
    int iSum1 = 0;
    int iSum2 = 0;
    if(iKilometers < 100)
    {
        iCharge1 = iKilometers * 25;
        printf("%d",iCharge1);
    }
    else if(iKilometers > 100)
    {   
        iSum1 = 100 * 25;
        int iKilometers2 = iKilometers - 100;
        iSum2 = iKilometers2 * 15;
        
        int iCharge2 = iSum1 + iSum2;
        printf("%d",iCharge2);
        }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the kilometers you travelled : ");
    scanf("%d",&iValue);
    
    TouristBill(iValue);
    
    return 0;
}