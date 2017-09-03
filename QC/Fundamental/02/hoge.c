#include <stdio.h>

int main(void)
{
    /* Here is comment. */
    int value = 10; /* 原則変数宣言は関数の先頭に限る */
    double price,tax;

    price = 360;
    tax = 1.08;


    printf("value is %d\n",value);

    value += 10;
    printf("new value is %d\n",value);

    value ++;
    printf("new value is %d\n",value);

    printf("price is %d\n",(int)price);
    printf("price including tax is %d\n",(int)(price*tax));

/* %桁数d */
    printf("price excluding tax is %4d\n",(int)price);
    printf("price excluding tax is %04d\n",(int)price);

/* %全体桁数.小数桁数f */
    printf("tax is %06.2f\n",tax);


    return 0;
}

