#include<stdio.h>
void MultipleDisplay(int iNo)
{
    int i =0;
    for(i=1;i<=5;i++)
    {
        int iMul= iNo * i;
        printf("%d " , iMul);
    }
}

int main()
{
    int iValue=0;
    printf("Enter a Number:");
    scanf("%d", &iValue);
    
    MultipleDisplay(iValue);
    return 0;
}