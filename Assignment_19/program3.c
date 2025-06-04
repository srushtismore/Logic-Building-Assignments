#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool Check(int Arr[],int iSize)
{
    int iCnt = 0,iCount = 0,iSum = 0;
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            break;       
        }
    }
    if(iCnt == iSize)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int iLength = 0,iCnt = 0;
    bool bRet = false;
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

    bRet = Check(p, iLength);

    if(bRet == true)
    {
        printf("11 is present");
    }
    else 
    {
        printf("11 is not present");
    }
    
    free(p);
    return 0;

}