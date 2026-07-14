#include<stdio.h>
void oddDisplay(int iNo)
{
    int i=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=1; i<=10; i++)
    {
        int iMul= i * iNo;
        printf("%d ",iMul);
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    
    oddDisplay(iValue);
    return 0;
}