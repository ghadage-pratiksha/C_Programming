#include<stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int result = add(10, 20);
    printf("Addition = %d", result);
    return 0;
}