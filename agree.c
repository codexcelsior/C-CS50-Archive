#include <cs50.h>
#include <stdio.h>

int main(void) {
    //Prompt the user to agree
    char c = get_char("Do you agree? ");

    if (c == 'y'|| c == 'Y') { // "|| means OR " and "&& means AND"
        printf("Agreed! \n");
    } 
    else if ( c == 'n'|| c == 'N')
    {
        printf("Disagreed!\n");
    }     //single character use '' -single quotes 
        //many a characters use "" - double quotes     

}