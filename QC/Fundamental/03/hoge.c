#include <stdio.h>

int main(void)
{
    /* Here is comment. */
    int value; /* 原則変数宣言は関数の先頭に限る */
    double price;

    scanf("%d",&value);      /* 標準入力 */
    scanf("%lf",&price);      /* 標準入力 */

    printf("value is %d\n",value);
    printf("price is %.1f\n",price);



    return 0;
}

