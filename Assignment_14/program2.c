//input    iRow = 4 iCol = 4

//output
/*
    2   4   6   8   10
    1   3   5   7   9
    2   4   6   8   10
    1   3   5   7   9
*/


#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0 , j = 0 , iNo = 0;

    for(i = 1; i <= iRow; i++)
    {
            for(j = 1,iNo = 1; j <= iCol; iNo++)
            {
                
                if((i % 2 == 0 && iNo % 2 != 0) || (i % 2 != 0 && iNo % 2 == 0))
                {
                    printf("%d\t",iNo);
                    j++;
                }
                
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

