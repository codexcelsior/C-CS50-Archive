#include <stdio.h>
#include <cs50.h>

float discount(float price, int percent_off);

int main(void) {
    float regular = get_float("Regular Price: "); //Type in regular
    int percent_off = get_int("Percent off: ");
    float sale = discount(regular, percent_off); //Execute discount function which returns value
    printf("Sale Price: %.2f\n", sale); //%2f = float to include float in a string
}

float discount(float price, int percent_off) {
    return price * (100 - percent_off)/100;

    //SCOPE: price = price * (100 - percent_off) / 100
}