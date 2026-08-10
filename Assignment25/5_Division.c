#include <stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL DisplaySchedule(char chDiv)
{
    if(chDiv == 'A' || chDiv == 'a')
    {
        printf("Your exam at 7 AM\n");
    }
    else if(chDiv == 'B' || chDiv == 'b')
    {
        printf("Your exam at 8.30 AM\n");
    }
    else if(chDiv == 'C' || chDiv == 'c')
    {
        printf("Your exam at 9.20 AM\n");
    }
    else if(chDiv == 'D' || chDiv == 'd')
    {
        printf("Your exam at 10.30 AM\n");
    }
    else
    {
        printf("Invalid division\n");
        return FALSE;
    }

    return TRUE;
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter your division: ");
    scanf(" %c", &cValue);

    bRet = DisplaySchedule(cValue);

    return 0;
}