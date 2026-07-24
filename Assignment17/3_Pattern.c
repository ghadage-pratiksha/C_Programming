#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    char ch;

    for(i = 1; i <= iRow; i++)
    {
        ch='a';
        int iNo2 = 1;

        for(j = 1; j <= iCol; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c\t", ch);
                ch++;
            }
            else
            {
                printf("%d\t", iNo2);
                iNo2++;
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