#include<stdio.h>

int SchoolFees(int iStandard)
{
    int Class1 = 8900;
    int Class2 = 12790;
    int Class3 = 21000;
    int Class4 = 23450;
    
    if(iStandard == 1)
    {
        printf("Your class fee is : %d", Class1);
    }
    else if(iStandard == 2)
    {
        printf("Your class fee is : %d", Class2);
    }
    else if(iStandard == 3)
    {
        printf("Your class fee is : %d", Class3);
    }
    else if(iStandard == 4)
    {
        printf("Your class fee is : %d", Class4);
    }
    else
    {
        printf("Wrong Input");
    }
}

int main()
{
    int iValue ;
    
    printf("Enter your class : ");
    scanf("%d",&iValue);
    
    SchoolFees(iValue);
    
    return 0;
    
}