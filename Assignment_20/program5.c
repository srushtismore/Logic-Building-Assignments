#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[],int iSize)
{
    int iCnt = 0,iMul = 1;
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iMul = iMul * Arr[iCnt];      
        }
    }

    return iMul;
    
}

int main()
{
    int iLength = 0,iCnt = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("unable to allocate memory");
        return -1;
    }

    printf("Enter the elments : \n");
    for(iCnt = 0;iCnt < iLength; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = Product(p, iLength);

    printf("Product is %d ",iRet);
       
    free(p);
    return 0;

}   