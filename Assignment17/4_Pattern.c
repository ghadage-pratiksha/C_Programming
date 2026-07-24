#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    for(i = 1; i <= iRow; i++)
    {
        int iNo=1;
        int iNo1= -1;
        for(j = 1; j <= iCol; j++)
        {
            if(i % 2!=0)
            {
                printf("%d\t",iNo);
                iNo++;
            }
            else
            {
                printf("%d\t",iNo1);
                iNo1--;
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : ");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}