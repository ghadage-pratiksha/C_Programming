#include <stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL;


BOOL ChkDigit(char ch)
{
    if(ch >= '0' && ch <= '9') 
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main() 
{
    char cValue='\0';
    BOOL bRet = FALSE;
    
    printf("Enter the Digit:");
    scanf("%c",&cValue);
    
    bRet = ChkDigit(cValue);
    
    if(bRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    return 0;
}
