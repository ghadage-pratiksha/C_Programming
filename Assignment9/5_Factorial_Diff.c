#include<stdio.h>

int FactorialDiff(int iNo)
{
    int i = 0;
    int iFact1 = 1;
    int iFact2 = 1;
    int iSum=0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
     for(int i=1; i<=iNo;i++)
    {
        if(i % 2 == 0)
        {
            iFact1 = iFact1 * i;
        }
        else if(i % 2 != 0)
        {
            iFact2 = iFact2 * i;
        }
    }
    iSum= iFact1 - iFact2;
    return iSum;
 }

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("FactorialDiffrence is %d", iRet);

    return 0;
}
