#include <cs50.h>
#include <stdio.h>

int main(void) {
    int MINE = 2;
    int point = get_int("Input your points: \n");
    if (point < MINE) {
        printf("You lost fewer points than me \n");
    } else if (point > MINE)
    {
        printf("You lost more points than me \n");
    } else {
        printf("You lost the same point as me \n");
    }
    
}