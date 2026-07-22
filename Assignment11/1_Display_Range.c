#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    if(iStart < 0)
    {
        iStart = - iStart;
    }
    if(iStart >= iEnd)
    {
        printf("Invalid Range");
    }

    for(iStart; iStart <= iEnd; iStart++)
    {
        printf("%d ", iStart);
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

    RangeDisplay(iValue1, iValue2);

    return 0;
}
