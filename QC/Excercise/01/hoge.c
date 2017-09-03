#include <stdio.h>

/* 文字変数/=文字”列”変数 */

void maxmin(int array[],int *min,int *max);

int main(void)
{
    /* Here is comment. */
    int i=0;
    int array[10],min,max;

    do {
      scanf("%d",&array[i]);/* ポインタ演算 */
      i++;
    } while(array[i-1] != -1);

    maxmin(array,&min,&max);

    printf("max is %d, min is %d\n",max,min);

    return 0;
}

void maxmin(int array[],int *min,int *max)
{
    int i=0;

    *min = 100;
    *max = 0;

    while (array[i] != -1) {
        if (array[i] < *min) *min = array[i];
        if (array[i] > *max) *max = array[i];
        i++;
    }

}

/*    printf("\n");*/

