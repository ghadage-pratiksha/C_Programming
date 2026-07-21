#include<stdio.h>

void Pattern(int iNo)
{
    for(int i = 1; i <= (iNo*2); i++)
    {
        if(i % 2 == 0)
        {
            printf("%d ",i);
        }
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d",&iValue);
    
    Pattern(iValue);
    
    return 0;
}