#include <stdio.h>

void Reverse(char *str)
{
    int iLength = 0;

    while(str[iLength] != '\0')
    {
        iLength++;
    }

    int j = 0;
    char rev[20];

    for(int i = iLength - 1; i >= 0; i--)
    {
        rev[j] = str[i];
        j++;
    }

    rev[j] = '\0';

    printf("Reverse string = %s", rev);
}

int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    Reverse(arr);

    return 0;
}