#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(void) {
    char *s = get_string("s: ");

    char *t = malloc(strlen(s) + 1); //Allocate memory for *t
    //Number of Byes you want back is in the braces
    //Why strlen s + 1 because there is always a NULL character at the end of the string 
   // Malloc does not automatically allocate memory for NULL character
   
    if (t == NULL) {
        return 1;
    }


    for (int i = 0, n = strlen(s) + 1; i < n; i++) {
        strcpy(t, s); 
    }

    if (strlen(t) > 0) 
    {

    t[0] = toupper(t[0]);

    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    free(t); //When you allocate something , you have to free the memory that you allocated 

}