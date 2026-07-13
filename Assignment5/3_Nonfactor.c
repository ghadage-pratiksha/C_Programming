#include<stdio.h>


void NonFact(int iNo)
{
    int iMult = 1;
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
    
    NonFact(iValue);
    
    return 0;
}