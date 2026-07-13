#include<stdio.h>

float Percentage(int iNo1, int iNo2)
{
    if(iNo1 == 0)
    {
        return 0;
    }

    float fPer = ((float)iNo2 / iNo1) * 100;

    return fPer;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    float fRet = 0.0;

    printf("Enter total marks: ");
    scanf("%d", &iValue1);

    printf("Enter obtained marks: ");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("Your percentage is %f", fRet);

    return 0;
}