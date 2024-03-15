/*3. Write a C program to convert temperatures between Celsius and Fahrenheit. Ask
the user to choose the conversion type (Celsius to Fahrenheit or Fahrenheit to
Celsius) and input the temperature. Use a switch case to perform the conversion
and display the result.*/
#include<stdio.h>
int main()
{
    float T,C,F;
    char scale;
    printf("Enter the temperature:");
    scanf("%f",&T);
    C=T+32;
    F= (9/5*T) + 32;
    printf("Choose the convertion type(F for C->F)and(C for F->C): ");
    scanf("%s",&scale);
    switch (scale)
    {
    case'C':
       {printf("%8.2fdegree farenheat= %8.2f degree celcious",T,C);}
        break;
    case'F':    
        {printf("%8.2fdegree celcious= %8.2f degree farenheat",T,F);}
        break;
    default:
        {printf("ERROR! Invalied Entery");}
        break;
    }
    return 0;
}