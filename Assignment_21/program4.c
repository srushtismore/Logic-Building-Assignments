#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[],int iSize)
{
    int iCnt = 0;
   
    printf("Elements which contains 3 digits in it are :\n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] >= 100 && Arr[iCnt] <= 999)
        {
            printf("%d\n",Arr[iCnt]);
        }
        
    }

    
}

int main()
{
    int iLength = 0,iCnt = 0;
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

    Digits(p, iLength);
    
    free(p);
    return 0;

}   