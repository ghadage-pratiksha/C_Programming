#include <stdio.h>

double CircleArea(float fRadius)
{
    double Area = 3.14 * fRadius * fRadius;  
    return Area;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter Radius: ");
    scanf("%f", &fValue);
    
    dRet = CircleArea(fValue);
    printf("Area of circle with radius %4lf", dRet);
    
    return 0;
}
