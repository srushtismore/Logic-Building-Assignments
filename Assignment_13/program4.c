//input    iRow = 4 iCol = 4

//output
/*
    1     2    3    4
   -1    -2   -3   -4   
    1     2    3    4
   -1    -2   -3   -4 
*/


#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0 , j1 = 0, j2 = 0;

    for(i = 1; i <= iRow; i++)
    {
            for(j1 = 1,j2 = -1; j1 <= iCol; j1++,j2--)
            {
                if(i % 2 == 0)
                {
                    printf("%d\t",j2);
                }
                else
                {
                    printf("%d\t",j1);
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

