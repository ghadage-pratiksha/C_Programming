#include <stdio.h>

void Display(char ch)
{
    int i;
    for(i = ch; i <= 'Z'; i++)
    {
         if(ch >= 'A' && ch <= 'Z')
         {
              printf("%c ", i);
         }
    }
    for(i = ch; i >= 'a'; i--)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c ", i);
        }
    }
    return;
}

int main()
{
    char cValue;

    printf("Enter the character: ");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}