#include <stdio.h>

double RectArea(float fWidth, float FHeight)
{
    double iArea= fWidth * FHeight;
    return iArea;
}
int main()
{
    float fValue1 = 0.0;
    float fValue2= 0.0;
    double dRet= 0.0;
    
    printf("Enter Width:");
    scanf("%f",&fValue1);
    
    printf("Enter Height:");
    scanf("%f",&fValue2);
    
    dRet = RectArea(fValue1, fValue2);
    printf("The area of rectange is %.4lf",dRet);
    return 0;
    
}
