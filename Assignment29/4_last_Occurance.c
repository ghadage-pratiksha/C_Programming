#include <stdio.h>

int LastChar(char *str, char ch)
{
    int iPos = -1;

    for(int i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            iPos = i;
        }
    }

    return iPos;
}

int main()
{
    char arr[20];
    char cValue;
    int iRet = 0;

    printf("Enter string: ");
    scanf(" %[^\n]s", arr);

    printf("Enter character: ");
    scanf(" %c", &cValue);

    iRet = LastChar(arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}