/*2. Create a C program that prompts the user to enter a month number (1 to 12) and
displays the number of days in that month. Consider a non-leap year*/
#include<stdio.h>
int main()
{
    int month;
    printf("Enter a Month number(1-12):");
    scanf("%d",&month);
    switch (month)
    {
        //months with 31 days
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:    
    case 10:
    case 12:
         { printf("The number of days =31");}
    break;
    //months with 30 days
    case 4 :
    case 6 :
    case 9 :
    case 11 :
        {printf("The number of days =30");}
    break;
    //month with 28 days
    case 2:
        {printf("The number of days =28");}
    break;
    default:
        {printf("ERROR! Invalied input");}
    break;
    }
return 0;
}