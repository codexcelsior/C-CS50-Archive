#include <stdio.h>
#include <cs50.h>

int main(void) {
    int init = 10;
    for (int i = 1; i < 10; i++) {
        for (int j = 1 ; j < 11; j++) {
            printf("%i ", init);
            init += 1;
        }
            printf("\n");
    }
}