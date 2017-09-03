#include <stdio.h>

int sum(int,int); /*プロトタイプ宣言*/

int main(void)
{
    /* Here is comment. */
    int value;

    value = sum(50,100);

    value ++;
    printf("%d\n",value);

    return 0;
}

int sum(int min,int max)
{

    int num;

    num = (min + max) * (max - min + 1) / 2;
    printf("%d\n",num);

    return num;

}

