#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int string_length(string s);

int main(void) {
    string s = get_string("Input: ");
    printf("Output: ");
    int length = strlen(s);
    for (int i = 0, n = strlen(s); i < length; i++) {
        printf("%c", s[i]);
    }
    printf("\n");
}

// int string_length(string s) {
//     int i = 0;
//     while (s[i] != '\0') {
//         i ++;
//     }
//     return i;

// }