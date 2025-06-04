//input    iRow = 4 iCol = 4

//output
/*
    1   2   3   4
    5   6   7   8
    9   1   2   3   
    4   5   6   7
*/


#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0 , j = 0,iNo = 1;

    for(i = 1; i <= iRow; i++)
    {
            for(j = 1;j <= iCol; j++,iNo++)
            {
                if(iNo > 9)
                {
                    iNo = 1;
                }

                printf("%d\t",iNo);
                 
            }
        printf("\n");    
    }

}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the number of rows : ");
    scanf("%d",&iValue1);

    printf("Enter the number of colums : ");
    scanf("%d",&iValue2);

    Display(iValue1 , iValue2);

    return 0 ;
}

