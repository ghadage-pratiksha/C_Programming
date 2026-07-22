#include<stdio.h>
// #include<math.h>

int SumNonFact(int iNo)
{
    int iSum = 0;
    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i != 0)
        {
            printf("%d\n",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    int iRet = SumNonFact(iValue);
    printf("Summation of Non factor is : %d",iRet);
    
    return 0;
}
