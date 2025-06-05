#include<stdio.h>
#include<stdlib.h>


int Difference(int Arr[],int iSize)
{
    int iCnt = 0,iMax = Arr[0],iMin = Arr[0];
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];      
        }
        else if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }

    return iMax - iMin;
    
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

    iRet = Difference(p, iLength);

    printf("Difference is %d",iRet);
    
    free(p);
    return 0;

}   