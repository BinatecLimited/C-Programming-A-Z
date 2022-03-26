#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*How to Make use of Formatted string and also assign Variables in C programming.*/
    char CH_name[] = "Davidpro";
    int CH_age = 15;
    char topic[]  = "REVISION";

    printf("%s\n", topic);
    printf("\n");
    printf("HOW TO MAKE USE OF FORMATTED STRINGS AND ALSO ASSIGN VARIABLES IN C.\n");
    printf("\n");
    printf("Hello world! My name is %s. I am %d years old.\n", CH_name, CH_age);
    printf("Hello world! My name is David. I am 10 years old.\n");

    CH_age = 12;
    printf("Hello world! My name is David. I am %d years old.\n", CH_age);

    /*DATA TYPES IN C PROGRAMMING*/

    printf("\nDATA TYPES IN C PROGRAMMING \n");
    printf("1. Integer \n 2. double \n 3. float \n 4. char(i.e'character')\n ");
    printf("\n");

    /* How it is used 'Data Types' */

    int age = 40;
    double gpa = 3.7;
    char grade = 'B';
    char phrase_string[] = "David Banjo";

    /*
     Working With "printf" Statement
    */

    char test[15];
    char answer[] = "(Hello World);";
    printf("WORKING WITH 'printf' Function\n");
    printf("    printf - prints out a standard output onto the screen it just prints out anything you demand of it be it text or number \n");
    printf("Example: \n");
    printf("SYNTAX : \n printf()then input text within the bracket with a surrounding quotation mark\n");
    printf("Complete the code below to print Hello World you can skip the quotation marks in the parenthesis\n");
    printf("printf");
    scanf("%s", &test);
    if (test == "(Hello World);")
        printf("Correct Keep up the good work\n");
    else
        printf("Do your research and try again\n");
    printf("\n");
    printf("Do not worry if you don't understand now you will understand better as we proceed");
    printf("\nUSING FORMATTED STRINGS IN C PROGRAMMING\n");
    printf("I have a %s and he's %d years today", "boy child", 5);
    printf("\n Check out the formattable strings in the source code of this project and how it was used\n");

    /* Carrying out Mathematical Equations and specifying what format you want your answers in */

    printf("\nMATHEMATICAL EQUATIONS WITH PRINTF\n");
    printf("\n");
    printf("ADDITION\n");
    printf("\n");
    printf("%d + %d = %d", 20, 5, 20 + 5);
    printf("\n");
    printf("\nSUBTRACTION\n");
    printf("\n");
    printf("%d - %d = %d", 20, 5, 20 - 5);
    printf("\n");
    printf("\nMULTIPLICATION\n");
    printf("\n");
    printf("%d * %d = %d", 20, 5, 20 * 5);
    printf("\n");
    printf("\nDIVISION\n");
    printf("\n");
    printf("%d / %d = %d", 20, 5, 20 / 5);
    printf("\n");
    printf("\n POWER OF\n");
    printf("\n");
    printf("%d^%d = %f", 2, 3, pow(2, 3));
    printf("\n");
    printf("\nSQUARE ROOT\n");
    printf("\nSquare root of %d = %f", 16, sqrt(16));
    printf("\n");
    printf("\nNEAREST WHOLE NUMBER OR ROUND UP\n");
    printf("\n");
    printf("%f to the Nearest Whole Number while rounding up is %f",35.765, ceil(35.765));
    printf("\nNEAREST WHOLE NUMBER OR ROUND DOWN\n");
    printf("\n");
    printf("%f to the Nearest Whole Number while rounding down is %f",35.765, floor(35.765));
    printf("\n");
    printf("\nGOOGLE SEARCH C MATH FUNCTION FOR MORE FUNCTIONS USED IN MATHEMATICAL EQUATIONS\n");


    /* CONSTANTS */
    printf("CONSTANTS\n");
    printf("\nCONSTANTS IN C ARE SPECIAL KIND OF VARIABLES THAT CANT BE MODIFIED\n");
    printf("const - is the function used to declare a variable as a constant\n");
    const int NUM = 5;
    printf("\n%d\n, NUM");
    printf("Its better to make the variable name of your constant all UPPERCASE for easy identification");
    /* if the 'const' function was absent in line 98 we would have been able to modify the value of the variable num like this*/
    int num = 10;
    printf("%d\n", num);
    /*The value of variable num will be modified here */
    num = 13;
    printf("%d\n", num);

    return 0;

}
