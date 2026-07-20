#include<stdio.h>
void RangeDisplayRev(int iStart, int iEnd)
{
    if (iEnd < 0)
    {
        iStart = - iStart;
    }
    if (iStart > iEnd)
    {
        printf("Invalid Range");
    }
    for(iEnd; iStart <= iEnd; iEnd--)
    {
        printf("%d ",iEnd);
    }
}



int main()
{
    int iValue1=0;
    int iValue2=0;
    
    printf("Enter Starting Point:");
    scanf("%d",&iValue1);
    
    printf("Enter Ending Point:");
    scanf("%d",&iValue2);
    
    RangeDisplayRev(iValue1,iValue2);
    return 0;
}