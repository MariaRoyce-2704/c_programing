/*Module No: 2
Topic: Switch statement
>1. Create a C program that asks the user to enter a character. If the entered character
 is a vowel (a, e, i, o, u), print "Vowel". Otherwise, print "Consonant".*/
#include<stdio.h>
int main()
{
    char a;
    printf("Enter a charecter(upercase only):");
    scanf("%s",&a);
    switch (a)
    {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            printf("VOWEL");
            break;
    
        default:
             printf("CONSONANT");
        break;
    }
    return 0;
}