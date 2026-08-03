#include <stdio.h>
#include<stdlib.h>
int Product(int Arr[], int iLength)
{
    int i =0;
    int iProduct=1;
    for(i=0; i<iLength; i++)
    {
        if(Arr[i] % 2 != 0)
        {
            printf("The odd number is %d\n",Arr[i]);
            iProduct = iProduct * Arr[i];
        }
        else
        {
            return 0;
        }
    }
    return iProduct;
}
int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt = 0;
    int *p=NULL;
    
    printf("Enter number of elements:");
    scanf("%d",&iSize);
    
    p =(int *)malloc(iSize * sizeof(int));
    
    if(p ==NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
    printf("Enter % d element:",iSize);
    for(iCnt=0; iCnt < iSize; iCnt++)
    {
        printf("\nEnter element %d:",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Product(p, iSize);
    printf("The Product of odd number is:%d",iRet);
    
    free(p);
    return 0;
}
