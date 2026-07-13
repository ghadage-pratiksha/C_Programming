void TableReverse(int iNo)
{
    int i=0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i=10; i>=1; i--)
    {
        int iMul= i * iNo;
        printf("%d ",iMul);
    }
}

int main()
{
    int iValue=0;
    printf("Enter Number:");
    scanf("%d",&iValue);
    
    TableReverse(iValue);
    return 0;
}