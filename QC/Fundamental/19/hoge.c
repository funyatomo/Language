#include <stdio.h>
#include <string.h>

/* 文字変数/=文字”列”変数 */
void fd(FILE *file,int *i);

int main(int argc,char *argv[])
{
    /* Here is comment. */
    if (argc > 1) {
        printf("%s\n",argv[1]);
    }

    fflush(stdin);
    getchar();

    return 0;
}

/*    printf("\n");*/

