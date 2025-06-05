#include <stdio.h>

void DisplaySchedule(char ch)
{
   if(ch == 'A' || ch == 'a')
   {
        printf("Your exam is at 7 AM");
   }
   else if(ch == 'B' || ch == 'b')
   {
        printf("Your exam is at 8:30 AM");

   }
   else if(ch == 'C' || ch == 'c')
   {
        printf("Your exam is at 9:20 AM");
   }
   else if(ch == 'D' || ch == 'd')
   {
        printf("Your exam is at 10:30 AM");
   }
   else
   {
        printf("Invalid Division entered");
   }
   

}

int main()
{
    char cValue = '\0';

    printf("Enter the your division\n");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    return 0;
}