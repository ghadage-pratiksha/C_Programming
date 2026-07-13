#include<stdio.h>
// #include<math.h>

int MultFactor(int iNo)
{
    int iMult = 1;
    for(int i = 1; i < iNo; i++)
    {
        if(iNo % i == 0)
        {
            printf("%d\n",i);
            iMult = iMult *i;
        }
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter a number : ");
    scanf("%d",&iValue);
    
    iRet = MultFactor(iValue);
    printf("Multiplication of factors : %d",iRet);
    
    return 0;
}