#include<stdio.h>
#include<stdlib.h>


int Minimum(int Arr[],int iSize)
{
    int iCnt = 0,iMin = Arr[0];
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];      
        }
    }

    return iMin;
    
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

    iRet = Minimum(p, iLength);

    printf("Smallest Number is %d",iRet);
    
    free(p);
    return 0;

}   