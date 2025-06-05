#include<stdio.h>
#include<stdlib.h>


int LastOcc(int Arr[],int iSize,int iNo)
{
    int iCnt = 0,iIndex = 0;
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iIndex = iCnt;      
        }
    }

    if(iIndex == 0)
    {
        return -1;
    }
    else
    {
        return iIndex;
    }
    
    
}

int main()
{
    int iLength = 0,iCnt = 0,iValue = 0;
    int iRet = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the number : ");
    scanf("%d",&iValue);

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

    iRet = LastOcc(p, iLength, iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("last element is at %d index",iRet);
    }
    
    free(p);
    return 0;

}   