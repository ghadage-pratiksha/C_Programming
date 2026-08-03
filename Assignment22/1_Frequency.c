#include <stdio.h>
#include<stdlib.h>
int Display(int Arr[] , int iLength)
{
    int i = 0;
    int iCount=  0;
    for(i=0; i<iLength; i++)
    {
        if(Arr[i] %2 ==0)
        {
            iCount++;
            printf("\n the even numebr is  :%d\n",Arr[i]);
        }
    }
    return iCount;
}
int main()
{
    int iSize=0;
    int iCnt=0;
    int *p=NULL;
    int iRet=0;
    
    printf("Enter numbers of elements:");
    scanf("%d",&iSize);
    
    p=(int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to get memory");
        return -1;
    }
    
    printf("Enter %d elements\n",iSize);
    
    for(iCnt=0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element %d:", iCnt + 1);
        scanf("%d",&p[iCnt]);
    }
    
    printf("You enterd:\n");
    
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        printf("%d\t ",p[iCnt]);
    }
    iRet=Display(p, iSize);
    printf("The Frequency of even number is:%d",iRet);
    free(p);
    return 0;
}