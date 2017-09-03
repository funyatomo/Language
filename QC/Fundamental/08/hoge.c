#include <stdio.h>

/* ローカル変数の寿命について */

int countfunc(void); /*プロトタイプ宣言*/
int miscount(void);


int main(void)
{
    /* Here is comment. */

    countfunc();
    countfunc();
    countfunc();

    miscount();
    miscount();
    miscount();

    return 0;
}

int countfunc(void)
{

    int count = 0;
    count++;
    printf("%d\n",count);

    return 0;

}

int miscount(void)
{

    int count_caution;
    count_caution++;
    printf("%d\n",count_caution);

    return 0;

}

