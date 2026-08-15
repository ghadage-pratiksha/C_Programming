#include<stdio.h>
int CountCapital(char *str)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            printf("The captial character is %c\n",*str);
            iCnt++;
        }
    *str ++;
    }
    return iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter string:");
    scanf("%[^\n]s",arr);
    
    iRet = CountCapital(arr);
    
    printf("\nThe count of capital character is :%d",iRet);
    return 0;
}