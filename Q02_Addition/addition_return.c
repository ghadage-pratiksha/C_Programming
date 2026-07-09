#include<stdio.h>

int add()
{
    int a = 10, b = 20;
    return a + b;
}

int main()
{
    int result = add();
    printf("Addition = %d", result);
    return 0;
}