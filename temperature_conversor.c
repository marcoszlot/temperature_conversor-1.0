#include <stdio.h>
#include <stdlib.h>

int main()
{
    int option;
    int firstOption;
    printf("\nCONNECT XZ\nTEMPERATURE CONVERSOR::1.0\n\nCHOOSE THE NUMBER OF CONVERSION\n\n1.CONVERT FAHRENHEIT TO CELSIUS\n2. CONVERT CELSIUS TO FAHRENHEIT\n");
    scanf("%i", &option);
    if(option == 1) {
        printf("\nPLEASE, ENTER THE DEGREE THAT YOU WANT TO CONVERT\n");
        scanf("%i", &firstOption);
        int calcFirst = (firstOption - 32) / 1.8;
        printf("%i DEGREES CELSIUS\n", calcFirst);
    } else if (option == 2) {
         printf("\nPLEASE, ENTER THE DEGREE THAT YOU WANT TO CONVERT\n");
         scanf("%i", &firstOption);
         int calcSecond = firstOption * 1.8 + 32;
         printf("%i FAHRENHEIT\n\n", calcSecond);
    }
    printf("\nTO RETURN PLEASE RESTART THE PROGRAM, ELSE YOU CAN GO AND HAVE FUN\n\nCONNECT XZ OFFICIAL PRODUCT\n\n");

    return 0;
}
