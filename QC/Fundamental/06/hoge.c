#include <stdio.h>

int main(void)
{
    /* Here is comment. */
    int input;
    int infant = 3, child = 10, adult = 25;
    int no = 3;

    input = 10;

    if (input == 12) printf("input=12\n"); else printf("input=/12\n");

    if (input == 10) {
        printf("input=10\n");
    } else {
        printf("input=/10\n");
    }


    if (child <= 3) {
        printf("child is infant.\n");
    } else if (child <= 15) {
        printf("child is child.\n");
    } else {
        printf("child is adult.\n");
    }

    printf("no is %d\n",no);

    switch (no) {
    case 0:
    case 1:
    case 3:
        printf("No.%d is male.\n",no);
        break;
    case 2:
        printf("No.%d is female.\n",no);
        break;
    default:
        printf("へいへいへい\n");
        break;
    }


    return 0;
}

