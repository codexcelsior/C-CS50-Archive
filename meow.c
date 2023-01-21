#include <cs50.h>
#include <stdio.h>

int main(void)  {
    int counter = 0;
    while (counter < 3)
    {
        printf("Meow\n");
        counter++;
    }

    for (int i = 0; i < 3; i++) {
        printf("meow\n"); //i < 3 = instantly check step 
        // i++ use to add up i 
    }
}