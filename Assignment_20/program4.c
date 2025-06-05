#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[],int iSize,int iStart,int iEnd)
{
    int iCnt = 0,iIndex = 0;
   
    printf("Elemets from %d to %d are : \n",iStart,iEnd);
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        if(Arr[iCnt] > iStart  && Arr[iCnt] < iEnd)
        {
            printf("%d\n",Arr[iCnt]);      
        }
    }

    
}

int main()
{
    int iLength = 0,iCnt = 0,iValue1 = 0,iValue2 = 0;
    int *p = NULL;

    printf("Enter the number of elements : \n");
    scanf("%d",&iLength);

    printf("Enter the starting number : ");
    scanf("%d",&iValue1);

    printf("Enter the ending number : ");
    scanf("%d",&iValue2);

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

    Range(p, iLength, iValue1,iValue2);
    
    free(p);
    return 0;

}   