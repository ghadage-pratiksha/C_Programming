#include <stdio.h>
#include<stdlib.h>
int Difference(int Arr[], int iLength)
{
    int iEvensum=0;
    int iOddsum=0;
    int i=0;
    for(i=0; i<iLength;i++)
    {
        if(Arr[i] % 2 == 0 )
        {
            iEvensum = iEvensum + Arr[i];
        }
        else
        {
            iOddsum= iOddsum + Arr[i];
        }
    }
    printf("The addition of even number  is %d\n",iEvensum);
    printf("The addition of odd number is %d\n",iOddsum);
    return iEvensum - iOddsum;
}
int main()
{
    int iSize=0;
    int iRet=0;
    int iCnt=0;
    int *p= NULL;
    
    printf("Enter number of elements:\n");
    scanf("%d",&iSize);
    
    p=(int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    
    printf("Enter %d elements\n",iSize);
    
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements: %d\n ", iCnt+1 );
        scanf("%d",&p[iCnt]);
    }
    iRet=Difference(p,iSize);
    printf("Result is %d",iRet);
    free(p);
    return 0;
    
}
