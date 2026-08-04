#include <stdio.h>
#include<stdlib.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL Check(int Arr[], int iLength, int iNo)
{
    int i =0;
    for(i=0 ; i< iLength ; i++)
    {
        if(Arr[i] == iNo)
        {
            return TRUE;
        }
    }
    return FALSE;
}
int main()
{
    int iSize =0;
    int iRet =0;
    int iCnt = 0;
    int iValue =0;
    int *p=NULL;
    
    printf("Enter number of elements:");
    scanf("%d", &iSize);
    
    printf("Enter number:\n");
    scanf("%d",&iValue);
    
    p =(int *)malloc(iSize *sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    printf("Enter %d element\n",iSize);
    
    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter element %d:", iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Check(p,iSize,iValue);
    
    if(iRet == TRUE)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    free(p);
    return 0;
}