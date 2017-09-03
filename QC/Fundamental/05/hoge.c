#include <stdio.h>

int main(void)
{
    /* Here is comment. */
    int input;

    input = 10;

    if (input == 10 ) printf("input is 10\n");

    if (input >=8 && input <= 12) printf("8<=input<=12\n");

    if (!(input >=12 && input <= 15)) printf("15<=input or input<=12\n");

    if (!(input >=12 || input <= 8)) printf("8<input<12\n");


    return 0;
}

