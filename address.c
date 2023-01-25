#include <stdio.h>
int main(void) {
    int numbers[] = {4,6,8,2,7,5,0};
    printf("%i\n", *numbers); //The place of firt character in the string -> place of where the string iniitally starts
    printf("%i\n", *(numbers + 1)); //The place in meomory of second character in the string
    printf("%i\n", *(numbers + 2)); 
    printf("%i\n", *(numbers + 3));
    printf("%i\n", *(numbers + 4));
    printf("%i\n", *(numbers + 5));
    printf("%i\n", *(numbers + 6));

// pointer arithmetic "%datatype", *the variable includes that datatype 




}