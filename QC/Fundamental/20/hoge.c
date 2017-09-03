#include <stdio.h>
#include <string.h>
#define EXCISETAX 0.03


int main(void)
{
    /* Here is comment. */
    int price;
    printf("The raw price:");
    scanf("%d",&price);
    price = (int)((1 + EXCISETAX) * price);
    printf("The price in tax:%d\n",price);

    return 0;
}

/*    printf("\n");*/

