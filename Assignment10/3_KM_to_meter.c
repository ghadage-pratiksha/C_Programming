#include <stdio.h>

int KMtoMeter(int iNo)
{
    int iKilo=0;
    int KM= 1000;
    iKilo = KM * iNo;
    return iKilo;
}
int main()
{
    int iValue = 0;
    int dRet= 0;
    
    printf("Enter Distance:");
    scanf("%d",&iValue);
    
    dRet = KMtoMeter(iValue);
    printf("the distance in kilometer is: %d",dRet);
    return 0;
    
}