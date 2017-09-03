#include <stdio.h>

/* 文字変数/=文字”列”変数 */

int getaverage(int data[]);

int main(void)
{
    /* Here is comment. */
    int *data,i;
    int average = 0,array[10] = {15,78,98,15,98,85,17,35,42,15};

    for (data = array;data != &array[10];data++) {
      average += *data;/* ポインタ演算 */
    }
    average = average / 10;
    printf("%d\n",average);
    printf("\n");

    average = 0;

    data = array;

    for (i = 0;i < 10;i++) {
      average += data[i];/* ポインタ演算 */
    }
    average = average / 10;
    printf("%d\n",average);

    return 0;
}

/*    printf("\n");*/

