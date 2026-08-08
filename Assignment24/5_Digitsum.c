#include <stdio.h>
#include<stdlib.h>
void Digitsum(int Arr[], int iLength)
{
    int i=0;
    for(i=0; i<iLength ; i++)
    {
        int iSum = 0;
        int iDigit = 0;
        while(Arr[i] > 0)
        {
            iDigit= Arr[i ] % 10;
            iSum = iSum + iDigit;
            Arr[i]=Arr[i]/10;
        }
        printf("%d\n",iSum);
    }
}
int main() 
{
    int iSize = 0;
    int iCnt= 0;
    int *p = NULL;
    
    printf("Enter number of elements:");
    scanf("%d",&iSize);
    
    p = (int *)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }
    printf("Enter %d elements\n",iSize);
    
    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        printf("Enter elements %d :",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    Digitsum(p , iSize);
    free(p);
    return 0;
}