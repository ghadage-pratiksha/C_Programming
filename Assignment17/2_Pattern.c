#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;

    for(i = 1; i <= iRow; i++)
    {
        int iNo1 = 2;
        int iNo2 = 1;

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d\t", iNo1);
                iNo1+=2;
            }
            else
            {
                printf("%d\t", iNo2);
                iNo2+=2;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1, iValue2;

    printf("Enter rows and columns : ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}