#include <stdio.h>

/* 文字変数/=文字”列”変数 */

int getaverage(int data[]);

int main(void)
{
    /* Here is comment. */
    int *data,i;
    int average,array[10] = {15,78,98,15,98,85,17,35,42,15};
    printf("array[3] = %d\n",array[3]);
    average = getaverage(array);/*pass the address of array*/
    printf("array[3] = %d\n",array[3]);
    printf("%d\n",average);
    printf("\n");

    array[3] = 15;

    data = array;

    average = 0;

    for (i = 0;i < 10;i++) {
      average += *(data + i);/* ポインタ演算 */
    }
    average = average / 10;
    printf("%d\n",average);

    return 0;
}

int getaverage(int data[])/* now it has the address of value*/
{
    int i,average = 0;
    for (i = 0;i < 10;i++) {
      average += data[i];
    }
    data[3] = 111;
    return average / 10;
}

/*    printf("\n");*/

