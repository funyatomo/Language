#include <stdio.h>

/* 文字変数/=文字”列”変数 */

int main(void)
{
    /* Here is comment. */
    int i1,i2,i3;
    int array[10];
    char str[256] = "DRAGON";


    printf("i1(%p)\n",&i1);
    printf("i2(%p)\n",&i2);
    printf("i3(%p)\n",&i3);
    printf("\n");

    printf("array___(%p)\n",array);
    printf("array[0](%p)\n",&array[0]);
    printf("array[1](%p)\n",&array[1]);
    printf("array[2](%p)\n",&array[2]);
    printf("\n");

    scanf("%s",&str[6]);
    printf("%s\n",str);

    return 0;
}

