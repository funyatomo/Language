#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 文字変数/=文字”列”変数 */

int tstep=0;
double dt=0.1,dx=1.0,grav=9.8;
double x1,x2;

int func(tstep)
{
    x2 = 0.5 * grav * (tstep * dt)*(tstep * dt);
    printf("%f\n",x2);

    return 0;
}


int main(void)
{
    /* Here is comment. */

    for(tstep=0;tstep<1000;tstep++)
    {

    func(tstep);

    }

    return 0;
}

