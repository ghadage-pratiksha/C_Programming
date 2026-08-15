#include<stdio.h>

#define TRUE 1
#define FALSE 0
typedef int BOOL; 

BOOL ChkVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A' || *str == 'a')||(*str == 'E' || *str == 'e') || (*str == 'I' ||                    	*str == 'i') ||(*str == 'O' || *str == 'o') || (*str == 'U' || *str == 'u'))
        {
            return TRUE;
        }
        *str ++;
    }
    return FALSE;
    
}
int main()
{
    char arr[20];
    BOOL bRet = FALSE;
    
    printf("Enter String:");
    scanf("%[^'\n']s",arr);
    
    bRet = ChkVowel(arr);
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

