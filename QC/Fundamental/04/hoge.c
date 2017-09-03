#include <stdio.h>

int main(void)
{
    /* Here is comment. */
    int min,max,sum;

    printf("Type integer, (min,max):");
    scanf("%d,%d",&min,&max);/* 標準入力 */

    sum = (min + max) / 2 * (max - min + 1);

    printf("The summation from %d to %d is %d\n",min,max,sum);

    printf("Type integer, (min,max):");
    scanf("%d,%d",&min,&max);/* 標準入力 */

    sum = (min + max) / 2 * (max - min + 1);

    printf("The summation from %d to %d is %d\n",min,max,sum);


    return 0;
}

