#include <cs50.h>
#include <stdio.h>
#include <string.h>


int main(void) {
    string names[] = {"Bill", "Chaelie","Fred","George","Ginny","Percy","Ron"};

    for (int i = 0; i < 7; i++) {
        if (strcmp(names[i], "Bill") == 0) {
            printf("Found!\n");
            return 0; //When return 0 => stops at loop
        }
    }
    printf("Not found!\n");
    return 1;
}