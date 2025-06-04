#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Multiples of 11 are : \n");
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 11 == 0 )
        {
            printf("%d\n",Arr[iCnt]);
        }
       
    }

}

int main()
{
    int iSize = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements : ");
    scanf("%d",&iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(NULL == p)
    {
        printf("Unable to allocate the memory");
        return -1;
    }

    printf("Enter %d Elements\n",iSize);

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Display(p , iSize);

    free(p);

    return 0;

}