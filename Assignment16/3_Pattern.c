#include<stdio.h>
void Pattern(int iRow, int iCol)
{
    int i , j=0;
    char ch='A';
    for(i=1; i<=iRow ; i++)
    {
        for(j=1; j<=iCol; j++)
        {
            printf("%c\t",ch);
        }
    
    printf("\n");
    ch++;
    }
}


int main()
{
    int iValue1=0;
    int iValue2=0;
    
    printf("Enter number of rows and columns:");
    scanf("%d%d",&iValue1,&iValue2);
    Pattern(iValue1,iValue2);
    
    return 0;
}