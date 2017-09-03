#include <stdio.h>
#include <string.h>

/* 文字変数/=文字”列”変数 */
void fd(FILE *file,int *i);

int main(void)
{
    /* Here is comment. */
    FILE *file;/* FILE型変数の宣言と対応するファイルポインタ */
    int i=100;
    file = fopen("test.txt","w");
    fprintf(file,"%d",i);
    fclose(file);

    file = fopen("test.txt","r");
    fd(file,&i);
    printf("%d\n",i);

    return 0;
}

void fd(FILE *file,int *i)
{

    fscanf(file,"%d",i);
    fclose(file);

    return ;

}

/*    printf("\n");*/

