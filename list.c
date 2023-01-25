#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int list[3];
    int *list = malloc(3 * sizeof(int));
    if (list == NULL) {
        return 1;
    }

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    //Time passes 
    int *tmp = malloc(4 * sizeof(int));
    if (tmp == NULL) {
        free(list);
        return 1;
    }

    for (int i = 0; i < 3; i++) {
        tmp[i] = list[i];
    }
    list[3] = 4;

    for (int i = 0; i< 4; i++ ) {
        printf("%i", list[i]);
    }
    return 0;

}