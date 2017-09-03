#include <stdio.h>
#include <memory.h>

/* 配列の概念について */


int main(void)
{
    /* Here is comment. */
    int i;
    int box1[] = {11,12,13,14,15};
    int box2[] = {1,2,3,4,5};



    for (i = 0;i < sizeof(box1)/sizeof(box1[0]);i++) {
        printf("box1[%d] = %d\n",i,box1[i]);
    }

    printf("sizeof(box1):%d\n",sizeof(box1));
    printf("sizeof(box1[0]):%d\n",sizeof(box1[0]));
    memcpy(box1,box2,sizeof(box2));
    printf("\n");

    for (i = 0;i < sizeof(box1)/sizeof(box1[0]);i++) {
        printf("box1[%d] = %d\n",i,box1[i]);
    }

    return 0;
}

