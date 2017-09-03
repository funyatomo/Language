#include <stdio.h>

int main(void)
{
    /* Here is comment. */

/* printf関数の実行には本来疑似命令が必要*/
    printf("Hello, world!\n\n");

/* \t,\nはタブ挿入や改行のためのエスケープシーケンス*/
    printf("Windows\tMicrosoft\n");
    printf("MacOS\tApple\n\n");

/* ""<= 文字列リテラル*/
    printf("文字列リテラル\n");

/*  %d 出力変換指定子*/
    printf("%d円\n",100);
    printf("%d+%d=%d\n",100,200,100+200);
    printf("10/3=d%d\n",10/3);
    printf("10.0/3.0=f%f\n\n",10.0/3);

    printf("%d\n\n",0);

    return 0;
}

