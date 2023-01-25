#include <stdio.h>
#include <stdlib.h>

int main(void ) 
{
    int *x = malloc(3 * sizeof(int)); //Pointer to x address then give the address 4 times the bytes of integer
    x[0] = 72;
    x[1] = 73;
    x[2] = 33;

    free(x);
}