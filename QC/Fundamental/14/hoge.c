#include <stdio.h>

/* 文字変数/=文字”列”変数 */

void func(int *pvalue);

int main(void)
{
    /* Here is comment. */
    int value = 10;
    printf("&value = %p\n",&value);
    func(&value);/*pass the address of value*/
    printf("value = %d\n",value);

    return 0;
}

void func(int *pvalue)/* now it has the address of value*/
{
    printf("pvalue = %p\n",pvalue);
    *pvalue = 100;
    printf("*pvalue = %d\n",*pvalue);
    return;
}

/*    printf("\n");*/

