#include<stdio.h>
int CountSmall(char *str)
{
    int iCnt=0;
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            printf("The small character is %c\n",*str);
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
    
    iRet = CountSmall(arr);
    
    printf("\nThe count of Small character is :%d",iRet);
    return 0;
}