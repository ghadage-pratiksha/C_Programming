#include<stdio.h>
#include<stdlib.h>
int Manimum(int Arr[], int iLength)
{
    int i =0;
    int min=Arr[0];
    for(i=0; i<iLength; i++)
    {
        if(Arr[i] < min)
        {
            min=Arr[i];
        }
    }
    return min;
}

int main()
{
    int iSize = 0;
    int iRet = 0;
    int iCnt=0;
    int *p =NULL;
    
    printf("Enter number of element:");
    scanf("%d", &iSize);
    
    p = (int *)malloc(iSize *sizeof(int));
     
    if(p == NULL)
    {
         printf("Unable to allocate memory");
         return -1;
    }
     printf("Enter %d elements\n",iSize);
     
     for(iCnt = 0; iCnt < iSize; iCnt++)
    {
         printf("Enter element %d:", iCnt+1);
         scanf("%d", &p[iCnt]);
    }
    
    iRet = Manimum(p,iSize);
    printf("Largest number is: %d",iRet);
    free(p);
    return 0;
}