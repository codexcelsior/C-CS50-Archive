#include <cs50.h>
#include <stdio.h> 

int main(void) { //Main function => side effects inside/return value
    string name = get_string("What's your name? ");
    printf("hello, world\n"); // argument 
}

//$ clang -o hello hello.c -lcs50 -> create an output file 
// -o : output file
// hello : name of the output file
// -lcs50 include lib cs50