#include<stdio.h>

double RectArea(int iNo)
{
    double SquareFeet = 0.0929;
    double Square = 0.0;

    Square = SquareFeet * iNo;

    return Square;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet: ");
    scanf("%d",&iValue);

    dRet = RectArea(iValue);

    printf("The area in square meter is: %.6lf", dRet);

    return 0;
}