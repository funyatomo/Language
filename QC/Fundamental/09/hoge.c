#include <stdio.h>

/* static local変数の寿命について */


int countfunc(void); /*プロトタイプ宣言*/


int main(void)
{
    /* Here is comment. */

    countfunc();
    countfunc();
    countfunc();
    countfunc();
    countfunc();

    return 0;
}

int countfunc(void)
{

    static int stacount;
    stacount++;
    printf("%d\n",stacount);

    return 0;

}

