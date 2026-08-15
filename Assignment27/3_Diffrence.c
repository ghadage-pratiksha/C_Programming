#include<stdio.h>
int CountSmall(char *str)
{
    int iCnt=0;
    int iCnt1=0;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            printf("the captial character is %c\n",*str);
            iCnt++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            printf("the small character is %c\n",*str);
            iCnt1 ++;
        }
    *str ++;
    }
    // if(iCnt < 0)
    // {
    //     iCnt = -iCnt;
    // }
    // if(iCnt1 < 0)
    // {
    //     iCnt1 =-iCnt1;
    // }
    
    return iCnt1-iCnt;
}
int main()
{
    char arr[20];
    int iRet = 0;
    
    printf("Enter string:");
    scanf("%[^\n]s",arr);
    
    iRet = CountSmall(arr);
    
    printf("\nThe count of capital character is :%d",iRet);
    return 0;
}