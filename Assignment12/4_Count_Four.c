#include<stdio.h>
int CountFour(int iNo)
{
    int iCnt = 0;
    if(iNo<0)
    {
        iNo=-iNo;
    }
    while(iNo != 0)
    {
        if((iNo % 10)==4)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue =0;
    int iRet=0;
    
    printf("Enter Number:");
    scanf("%d",&iValue);
    
    iRet = CountFour(iValue);
    
    printf("%d",iRet);
    return 0;
}
