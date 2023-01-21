#include <stdio.h>
#include <cs50.h>


int main(void) 
{
    int n;

    while (true) {
        n = get_int("type num of bricks per row: ");

        if (n > 0 ) {
            break;
        }
    }

    // For each row
    for (int i = 0; i < n; i++) {

        //For each column
        for ( int j = 0; j < n; j++) {
            printf("#"); //print a brick
        }
        printf("\n"); // move to next row
    } // IT works like a typewriter -> each row have 3 bricks once done -> get to new line 
    
}