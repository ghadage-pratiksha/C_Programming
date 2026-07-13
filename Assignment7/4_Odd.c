#include<stdio.h>
void oddDisplay(int iNo)
{
    int i =0;
    for(i=1;i<=iNo;i++)
    {
        if(i % 2 != 0)
        {
           printf("%d ", i);
        }
    }
}

int main()
{
    int iValue=0;
    printf("Enter a Number:");
    scanf("%d", &iValue);
    
    oddDisplay(iValue);