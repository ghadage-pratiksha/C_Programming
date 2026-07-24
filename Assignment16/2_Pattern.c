#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i, j;
    char ch1;
    char ch2;
    for(i = 1; i <= iRow; i++)
    {
        ch1='A';
        ch2='a';
        for(j = 1; j <= iCol; j++)
        {
            if (i%2 !=0)
            {
                printf("%c\t",ch1);
                ch1++;
            }
           else
           {
               printf("%c\t",ch2);
               ch2++;
           }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter rows and columns: ");
    scanf("%d%d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}