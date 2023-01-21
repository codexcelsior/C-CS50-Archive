#include <cs50.h>
#include <stdio.h>

int main(void) {
    int x = get_float("Type x: ");
    int y = get_float("Type y: ");
    float z = (float) x / (float) y;
    

    //long = long int
    //int = integer

    printf("%.50f\n", z); //Take 1 input (string )
    //depends on intention -> use correct statement  
    //floating point imprecision -> out of bits
    //truncation -> remove all the 
}