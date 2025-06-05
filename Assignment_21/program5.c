#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[],int iSize)
{
    int iCnt = 0,iSum = 0,iDigit = 0;
   
    printf("Additin of digits in numbers are :\n");
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        iSum = 0;
        
        while(Arr[iCnt] > 0)
        {
            iDigit = Arr[iCnt] % 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }

        printf("%d\n",iSum);
        
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

    DigitsSum(p, iLength);
    
    free(p);
    return 0;

}   