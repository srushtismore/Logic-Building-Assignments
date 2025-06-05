#include<stdio.h>
#include<stdlib.h>

#define true 1
#define false 0

typedef int bool;

bool Check(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
   
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
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
    int iLength = 0,iCnt = 0,iValue = 0;
    bool bRet = false;
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

    bRet = Check(p, iLength, iValue);

    if(bRet == true)
    {
        printf("Number is present");
    }
    else 
    {
        printf("Number is not present");
    }
    
    free(p);
    return 0;

}