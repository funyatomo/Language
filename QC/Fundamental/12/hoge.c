#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 文字変数/=文字”列”変数 */

int func(void);

int main(void)
{
    /* Here is comment. */
    char c = 'A';
    char str[] = {'M','A','R','I','O','\0'};
    char b[] = "MARIO";

    printf("%c\n",c);

    c = 'A' + 9;

    printf("%c\n",c);

    printf("%s\n",str);

    printf("%s\n",b);

    func();

    return 0;
}

int func(void)
{
    char str[10] = "145";
    int suuti = atoi(str);/* #include <stdlib.h> is needed */

    printf("%d:\n",suuti);
    strcpy(str,"MARIO");
    printf("%s:\n",str);


    return 0;
}

