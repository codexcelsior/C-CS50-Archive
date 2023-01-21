
#include <cs50.h>
#include <stdio.h>

int main(void) { //Main function => side effects inside/return value
    string answer = get_string("What's your name: ");//Tell it wwhat you mean -> answer is a string
    printf("hello %s\n", answer); // argument 
}

//cd - change dir
// cp - copy
//mkdir - make dir
//ls - list
//cp 