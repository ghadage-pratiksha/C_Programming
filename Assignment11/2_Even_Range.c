#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    if(iStart >= iEnd)
    {
        printf("Invalid Range");
    }

    for(iStart; iStart <= iEnd; iStart++)
    {
        if(iStart % 2 ==0)
        {
            printf("%d  ",iStart);
        }
        
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter a starting point: ");
    scanf("%d", &iValue1);

    printf("Enter a ending point: ");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}
