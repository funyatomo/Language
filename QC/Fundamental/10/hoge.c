#include <stdio.h>

/* 配列の概念について */


int main(void)
{
    /* Here is comment. */
    int array[100];
    int i;
    int box1[10] = {42,79,13};
    int box2[] = {1,2,3};

    array[9] = 100;
    printf("1:%d\n",array[9]);
    array[9] ++;
    printf("1:%d\n",array[9]);

    printf("box1[0] = %d\n",box1[0]);
    printf("box1[1] = %d\n",box1[1]);
    printf("box1[2] = %d\n",box1[2]);
    printf("box1[3] = %d\n",box1[3]);
    printf("box1[4] = %d\n",box1[4]);

    printf("\n");

    printf("box2[0] = %d\n",box2[0]);
    printf("box2[1] = %d\n",box2[1]);
    printf("box2[2] = %d\n",box2[2]);

    printf("\n");

    for (i = 0;i < 5;i++) {
        printf("box1[%d] = %d\n",i,box1[i]);
    }

    return 0;
}

